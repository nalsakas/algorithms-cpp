#include <iostream>
#include <vector>
#include <memory>
using namespace std;

template <class T>
class Node
{
public:
    Node(T val)
    {
        this->val = val;
    }

    T val;
    Node<T>* next = nullptr;
};

template <class T>
void iterateList(Node<T>* root)
{
    Node<T>* current = root;

    while (current != nullptr)
    {
        cout << current->val << endl;
        current = current->next;
    }
}

template <class T>
bool findList(Node<T>* root, T target)
{
    Node<T>* current = root;

    while (current != nullptr)
    {
        if (current->val == target)
        {
            return true;
        }
        current = current->next;
    }
    return false;
}

template <class T>
Node<T>* reverseList(Node<T>* root)
{
    Node<T>* prev = nullptr;
    Node<T>* current = root;
    Node<T>* next = nullptr;

    while (current != nullptr)
    {
        next = current->next;

        current->next = prev;

        prev = current;
        current = next;
    }
    return prev;
}

template<class T>
Node<T>* addItemList(Node<T>* root, T val)
{
    Node<T>* prev = nullptr;
    Node<T>* current = root;

    while (current != nullptr)
    {
        prev = current;
        current = current->next;
    }
    
    prev->next = new Node<T>(val);
    return root;
}

template<class T>
Node<T>* addItemList(Node<T>* root, Node<T>* node)
{
    Node<T>* prev = nullptr;
    Node<T>* current = root;

    while (current != nullptr)
    {
        prev = current;
        current = current->next;
    }
    
    prev->next = node;
    return root;
}

template<class T>
vector<T>* getList(Node<T>* node)
{
    if (node == nullptr)
    {
        return new vector<T>;
    }

    vector<T>* collect = getList<T>(node->next);
    //collect->push_back(node->val);
    collect->insert(collect->begin(), node->val);
    return collect;
}

int main()
{
    Node<char>* a = new Node<char>('a');
    Node<char>* b = new Node<char>('b');
    Node<char>* c = new Node<char>('c');
    Node<char>* d = new Node<char>('d');
    Node<char>* e = new Node<char>('e');
    Node<char>* f = new Node<char>('f');
    auto h = new Node<char>('h');
    auto k = new Node<char>('k');
    auto l = new Node<char>('l');

    auto head = a;
    a->next = b;
    b->next = c;
    c->next = d;
    c->next = e;
    e->next = f;

    cout << "Iterate..." << endl;
    iterateList<char>(head);

    cout << "Find items..." << endl;
    cout << (findList<char>(a, 'f') ? "True" : "False") << endl;
    cout << (findList<char>(a, 'g') ? "True" : "False") << endl;
    
    cout << "Iterate on reverse list..." << endl;
    head = reverseList<char>(a);
    iterateList<char>(head);
    head = reverseList<char>(head);

    cout << "Add new (char) item..." << endl;
    addItemList<char>(head, 'g');
    iterateList<char>(head);

    cout << "Add new (Node) item..." << endl;
    addItemList<char>(head, h);
    addItemList<char>(head, k);
    addItemList<char>(head, l);
    iterateList<char>(head);


    cout << "Iterate..." << endl;
    auto list = getList<char>(head);
    for (int i = 0; i < list->size(); i++)
    {
        cout << list->at(i) << endl;
    }

    cout << "Iterate..." << endl;
    for (char c : *getList<char>(head))
    {
        cout << c << "\n";
    }

    return 0;
}
