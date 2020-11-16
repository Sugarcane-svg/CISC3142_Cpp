//
//  Rational.h
//  Rational
//
//  Created by Phoebe ZOU on 11/14/20.
//

#ifndef rational_h
#define rational_h


#include <iostream>
class Rational{
    public:
    Rational(int num = 0, int denom = 1);
    Rational add(const Rational&) const;
    Rational &addInPlace(const Rational&);
    Rational neg() const;
    void print(std::ostream &os) const;
    void copy(const Rational&);
    int getNumerator() const;
    int getDenominator() const;
    Rational inv() const;
    int compareTo(const Rational &r) const;
    bool equals(const Rational &r) const;
    Rational sub(const Rational&) const;
    Rational &subInPlace(const Rational&);
    Rational mul(const Rational&) const;
    Rational &mulInPlace(const Rational&);
    Rational div(const Rational&) const;
    Rational &divInPlace(const Rational&);
    private:
    int num, denom;
};
    inline std::ostream &operator <<(std::ostream &os, const Rational &r){
        r.print(os);
        return os;
    }
#endif /* Rational_h */
