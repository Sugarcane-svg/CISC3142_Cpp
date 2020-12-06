#include "rational.h"
#include "rational_exception.h"
#include "gcd.h"

void simply(int a, int b)
{
    int g = gcd(a, b);
    a /= g;
    b /= g;
}
Rational::Rational(int num, int denom)
{
    if (denom == 0)
        throw RationalException("denominator cannot be 0");
    simply(num, denom);
    Rational::num = num;
    Rational::denom = denom;
}

Rational &Rational::operator+=(const Rational &r)
{
    if (r.denom == denom)
    {
        num += r.num;
    }
    else
    {
        num = (num * r.denom + denom * r.num);
        denom *= r.denom;
    }
    simply(num, denom);
    return *this;
}
Rational &Rational::operator-=(const Rational &r)
{
    if (r.denom == denom)
    {
        num -= r.num;
    }
    else
    {
        num = (num * r.denom - denom * r.num);
        denom *= r.denom;
    }
    simply(num, denom);
    return *this;
}
Rational &Rational::operator*=(const Rational &r)
{
    num *= r.num;
    denom *= r.denom;
    simply(num, denom);
    return *this;
}
Rational &Rational::operator/=(const Rational &r)
{
    return this*=(r);
}
Rational Rational::operator-() const
{
    return Rational(num * -1, denom);
}
Rational Rational::inv() const
{
    return Rational(denom, num);
}
int Rational::compareTo(const Rational &r) const
{
    if (denom == r.denom)
    {
        return num > r.num ? 1 : num < r.num ? -1 : 0;
    }
    int n1 = num * r.denom;
    int n2 = r.num * denom;
    return n1 > n2 ? 1 : n1 < n2 ? -1 : 0;
}
int Rational::getDenominator() const { return denom; }
int Rational::getNumerator() const { return num; }

Rational operator+(const Rational &r1, const Rational &r2)
{
    Rational temp = r1;
    return temp += r2;
}
Rational operator-(const Rational &r1, const Rational &r2)
{
    Rational temp = r1;
    return temp -= r2;
}

Rational operator*(const Rational &r1, const Rational &r2)
{
    Rational temp = r1;
    return temp *= r2;
}
Rational operator/(const Rational &r1, const Rational &r2)
{
    Rational temp = r1;
    return temp /= r2;
}
bool operator==(const Rational &r1, const Rational &r2)
{
    return r1.compareTo(r2) == 0;
}
std::ostream &operator<<(std::ostream &os, const Rational &r)
{
    if (r.getNumerator() == 0)
        os << "0";
    else if (r.getDenominator() == 1)
        os << r.getNumerator();
    else
        os << r.getNumerator() << "/" << r.getDenominator();
    return os;
}
