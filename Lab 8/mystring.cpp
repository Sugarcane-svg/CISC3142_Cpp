#include "mystring.h"
#include "mystring_exception.h"
#include <cstring>
#include <iostream>

namespace mystring
{
    //non-member function
    std::ostream &operator<<(std::ostream &os, const string &s)
    {
        os << s.cs;
        return os;
    }
    string operator+(const string &s1, const string &s2)
    {
        string temp = s1;
        temp += s2;
        return temp;
    }

    //member function
    string::string(const char *a) : cs(new char[strlen(a) + 1])
    {
        strcpy(cs, a);
    }
    string::string(const string &s)
    {
        strcpy(cs, s.cs);
    }
    string::~string()
    {
        delete[] cs;
    }
    string &string::operator=(const string &rhs)
    {
        strcpy(cs, rhs.cs);
        return *this;
    }
    char &string::operator[](int index)
    {
        if (index >= 0 && index < length())
            return *(cs + index);
        else
        {
            printf("index %d out of bound", index);
            exit(1);
        }
    }
    string &string::operator+=(const string &s)
    {
        int length = this->length() + s.length(); //have a new length
        char *temp = new char[length + 1];        //pointer point to the char arr
        strcpy(temp, cs);                         //copy the original char
        strcat(temp, s.cs);                       //append s
        this->~string();                          //destructor
        cs = temp;
        return *this;
    }
    int string::length() const
    {
        return strlen(cs);
    }
    void string::clear()
    {
        cs = '\0';
    }

} // namespace mystring
