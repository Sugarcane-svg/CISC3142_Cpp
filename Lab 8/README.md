#Create a String class

        language: C++
        function: minimal (illustrates the use of and need for the canonical form)

Example

    string(const char *) constructor

        1. when this constructor is called, the length of the argument is obtained using strlen and a buffer of the corresponding size is allocated (this can be done within the member initialization list)
        2. the contents of the argument C-string is then copied to this new buffer using strcpy (this needs to be done in the body of the constructor; there is no way to work it into the member intialization list)

        string::string(const char *cs) : cs(new char[strlen(cs)+1) { 	// the +1 is for the null terminator

    string::string(const string &s) copy constructor

        1. inistialize s with constructor(mention above) using member initialization list
        2. copy elements over from s to receiver

        string::string(const string &s) : string(s.cs) { strcpy(cs, s.cs);}