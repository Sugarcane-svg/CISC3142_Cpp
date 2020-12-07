#ifndef MYSTRING_H
#define MYSTRING_H

#include

namespace mystring
{

    class string
    {
        friend std::ostream &operator<<(std::ostream &os, const string &s); //print output
        friend string operator+(const string &s1, const string &s2);        //concat

    public:
        string(const char *cs = ""); //constructor
        string(const string &s);   //copy constructor 
        ~string();  //destructor
        string &operator=(const string &rhs); //deep copy
        char &operator[](int index); //move pointer into specific position
        string &operator+=(const string &s);  //in-place concatenation
        int length() const;
        void clear();

    private:
        char *cs;
    };

} // namespace mystring

#endif