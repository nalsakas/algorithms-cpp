#pragma once

#include <iostream>
#include <vector>

namespace my
{
    class String
    {
    public:
        String() {}

        String(const char *str)
        {
            while (*str != '\0')
            {
                this->data.push_back(*str);
                str += 1;
            }
        }

        String(const String &str)
        {
            if (this == &str) return;
            this->data = str.data;
        }

        String(String &&str)
        {
            if (this == &str) return;

            this->data = str.data;
            str.data.clear();
        }

        String &operator=(const String &str)
        {
            if (this == &str) return *this;

            this->data = str.data;
            return *this;
        }

        String &operator=(String &&str)
        {
            if (this == &str) return *this;

            this->data = str.data;
            str.data.clear();
            return *this;
        }

        bool operator==(const String &str)
        {
            return this->data == str.data;
        }

        friend std::ostream &operator<<(std::ostream &out, const String &str)
        {
            if (str.length() == 0) return out;
            for (int i = 0; i < str.length(); i++)
            {
                out << str.data[i];
            }
            return out;
        }

        friend std::istream &operator>>(std::istream &in, String &str)
        {
            char line[255];
            in.getline(line, 254);
            str = String(line);
            return in;
        }

        int length() const
        {
            return this->data.size();
        }

    private:
        std::vector<char> data;
    };
}