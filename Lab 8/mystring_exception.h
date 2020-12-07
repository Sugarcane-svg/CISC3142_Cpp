#ifndef MYSTRING_EXCEPTION
#define MYSTRING_EXCEPTION

#include <string>

namespace mystring
{

    class string_Exception
    {
    public:
        string_Exception(std::string what) : what(what) {}
        std::string getWhat() { return what; }

    private:
        std::string what;
    };

} // namespace mystring

#endif