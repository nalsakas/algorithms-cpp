#ifndef __String2__
#define __String2__
#include <iostream>
using namespace std;

class String2
{
public:
    String2();
    String2(const char* str);
    String2(const String2& str);
    String2(String2&& str);
    String2& operator=(const String2& str);
    String2& operator=(String2&& str);
    bool operator==(const char* str);
    bool operator==(const String2& str);
    friend ostream& operator<<(ostream& out, const String2& str);
    friend istream& operator>>(istream& in, String2& str);
    int length() const;
    ~String2();

private:
    char *data;
    int size;
};
#endif