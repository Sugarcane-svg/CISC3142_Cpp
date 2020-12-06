//
//  gcd.h
//  Rational
//
//  Created by Phoebe ZOU on 11/14/20.
//

#ifndef gcd_h
#define gcd_h
inline int gcd(int a, int b) {return b == 0 ? a : gcd(b, a % b);}

#endif /* gcd_h */
