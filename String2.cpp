#include "String2.h"
#include <cstring>

String2::String2()
{
    this->data = nullptr;
    this->size = 0;
}

String2::String2(const char* str)
{
    this->size = strlen(str);
    this->data = new char[this->size + 1];
    memcpy(this->data, str, this->size + 1);
}

String2::String2(const String2& str)
{
    if (this == &str) return;
    this->size = str.size;
    this->data = new char[this->size + 1];
    memcpy(this->data, str.data, str.size + 1);
}

String2::String2(String2&& str)
{
    if (this == &str) return;
    this->size = str.size;
    this->data = str.data;
    str.size = 0;
    str.data = nullptr;
}

String2& String2::operator=(const String2& str)
{
    if (this == &str) return *this;

    delete[] this->data;
    this->size = str.size;
    this->data = new char[this->size + 1];
    memcpy(this->data, str.data, str.size + 1);
    return *this;
}

String2& String2::operator=(String2&& str)
{
    if (this == &str) return *this;

    this->size = str.size;
    this->data = str.data;
    str.size = 0;
    str.data = nullptr;
    return *this;
}

ostream& operator<<(ostream& out, const String2& str)
{
    if (str.size == 0) return out;
    out << str.data;
    return out;
}

istream& operator>>(istream& in, String2& str)
{
    char line[255];
    in.getline(line, 254);
    str = String2(line);
    //in >> str.data;
    return in;
}

bool String2::operator==(const char* str)
{
    if (this->data == nullptr)
        return (bool) !strcmp("", str);
    else
        return (bool) !strcmp(this->data, str);
}

bool String2::operator==(const String2& str)
{
    if (this->data != nullptr && str.data != nullptr)
        return (bool) !strcmp(this->data, str.data);
    else if (this->data == nullptr)
        return (bool) !strcmp("", str.data);
    else
        return (bool) !strcmp(this->data, "");
    
}

int String2::length() const
{
    return this->size;
}

String2::~String2()
{
    delete[] this->data;
}
