#include "rational.h"
#include "rational_exception.h"
#include "gcd.h"

//simply the form of rational number
void simplfy(int a, int b){
    int g = gcd(a,b);
    a = a/g;
    b = b/g;
}
//constructor
Rational::Rational(int a, int b){
    if(b==0){
        throw RationalException("denominator cannot be 0");
    }
    simplfy(a, b);
    num = a;
    denom = b;
}
//negation
Rational Rational::neg() const{
    return Rational(num*(-1),denom);
}
//inverse
Rational Rational::inv() const{
    return Rational(denom,num);
}
int Rational::getNumerator() const{
    return num;
}
int Rational::getDenominator() const{
    return denom;
}
//print function
void Rational::print(std::ostream &os) const{
    if(denom == 1){
        os<<num;
    }else{
        os<<num<<"/"<<denom;
    }
}
int Rational::compareTo(const Rational &r) const{
    if(denom == r.denom){
        return num>r.num? 1 : num < r.num? -1 : 0;
    }
    int n1 = num*r.denom;
    int n2 = denom*r.num;
    return n1>n2? 1 : n1<n2? -1:0;
}
bool Rational::equals(const Rational &r) const{
    return this->compareTo(r)==0;
}

//returns new rational
Rational Rational::add(const Rational &r) const{
    Rational a(num, denom);
    return a.addInPlace(r);
}
Rational Rational::sub(const Rational &r) const{
    Rational a(num, denom);
    return a.subInPlace(r);
}
Rational Rational::mul(const Rational &r) const{
    Rational a(num, denom);
    return a.mulInPlace(r);
}
Rational Rational::div(const Rational &r) const{
    Rational a(num, denom);
    return a.divInPlace(r);
}

//re-write the result into receiver
Rational &Rational::addInPlace(const Rational &r){
    if(denom == r.denom){
        num = num+r.num;
        simplfy(num, denom);
    }else{
        int commonDemon = denom*r.denom;
        int n1 = num*r.denom;
        int n2 = denom*r.num;
        num = n1+n2;
        denom = commonDemon;
        simplfy(num, denom);
    }
    return *this;
}
Rational &Rational::subInPlace(const Rational &r){
    if(denom == r.denom){
        num = num-r.num;
        simplfy(num, denom);
    }else{
        int commonDemon = denom*r.denom;
        int n1 = num*r.denom;
        int n2 = denom*r.num;
        num = n1-n2;
        denom = commonDemon;
        simplfy(num, denom);
    }
    return *this;
}
Rational &Rational::mulInPlace(const Rational &r){
    num = num*r.num;
    denom = denom*r.denom;
    simplfy(num, denom);
    return *this;
}
Rational &Rational::divInPlace(const Rational &r){
    return mulInPlace(r.inv());
}
