#ifndef __LINKEDLIST__
#define __LINKEDLIST__
#include <vector>
#include <iostream>

template <class T>
struct Node
{
    Node(T val)
    {
        this->val = val;
    }
    T val;
    Node* next = nullptr;
};

template <class T>
void iterateList(Node<T>* root)
{
    Node<T>* current = root;

    while (current != nullptr)
    {
        std::cout << current->val << std::endl;
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
std::vector<T>* getList(Node<T>* node)
{
    if (node == nullptr)
    {
        return new std::vector<T>;
    }

    std::vector<T>* collect = getList<T>(node->next);
    //collect->push_back(node->val);
    collect->insert(collect->begin(), node->val);
    return collect;
}

#endif