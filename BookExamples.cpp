#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;

void addOne(int &x)
{
    x += 1;
}

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    void (*inc)(int &) = addOne;
    
    int var = 10;
    cout << "Before inc: "<< var << endl;
    inc(var);
    (*inc)(var);
    cout << "After inc: " << var << endl;

    int x = 5, y = 10;
    cout << "Before swap: " << x << " " << y << endl;
    swap(x, y);
    cout << "After swap: " << x << " " << y << endl;


    vector<int> v1 = {1, 2, 3, 4};
    vector<int> v2(v1.size());
    vector<int> v3;

    // Incrementing all elements of vector by 1
    transform(v1.begin(), v1.end(), v2.begin(),
              [](int a) { 
                return pow(a, 2);
              });
    
    for (auto i : v2)
        cout << i << " ";
    cout << endl;

    for_each(v2.begin(), v2.end(), [](int& item){item += 1;});
    for (auto i : v2)
        cout << i << " ";
    cout << endl;


    for_each(v2.begin(), v2.end(), [&v3](int& item){v3.push_back(pow(item, 2));});
    for (auto i : v3)
        cout << i << " ";
    cout << endl;

    sort(v3.begin(), v3.end(), [](int&a, int&b){return a > b;});
    for (auto i : v3)
        cout << i << " ";
    cout << endl;

    cout << "Reduce (Sum)..." << endl;
    int sum = reduce(v3.begin(), v3.end()); 
    cout << "Sum with default intial value: " << sum << endl;


    vector<int> v4 = {-1, 5, -9, 67, 89};     
    cout << "Accumulate (Count positives):" << endl;
    int count2 = accumulate(v4.begin(), v4.end(), 0,
    [] (int a, int item) {
        if (item >= 0)
            return a + 1;
        return a;
    });
    cout << count2 << endl;

    auto it = v4.begin();
    cout << *it << endl;

    it = v4.end() - 1;
    cout << *it << endl;


    vector<int> v = {1, 2, 2, 5, 4, 3, 5, 4};

    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size();) {
            if (v[j] == v[i])
                v.erase(v.begin() + j);
            else
                j++;
        }
    }

    for (auto i : v)
        cout << i << " ";


    string  s = "Merhaba";
    s.erase(s.begin());
    cout << s << endl;

    return 0;
}