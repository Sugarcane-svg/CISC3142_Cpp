//
//  RationalException.h
//  Rational
//
//  Created by Phoebe ZOU on 11/14/20.
//

#ifndef rational_exception_h
#define rational_exception_h


#include <string>

using namespace std;

class RationalException {
public:
    RationalException(string what) : what(what) {}
    string getWhat() {return what;}
private:
    string what;
};

#endif /* RationalException_h */
