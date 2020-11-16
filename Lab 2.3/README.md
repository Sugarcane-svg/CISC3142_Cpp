class design:

private values: 

	numerator
	denominator

constructors:

	Rational(int a, int b)    //take both numerator and denominator
	Rational(int a)    //only numerator when denominator is 1
	Rational()    //represent 0
	Rational(Rational obj)    //copy constructor

functions:

	void copy()    //copy method
	getNumerator()
	getDenominator()
	inverse()    //reciprocal
	negate()    //negation
	toString()
	compareTo(Rational obj)
	lcm(Rational obj)    //least common multiple
	equals(Rational obj)    
	add(Rational obj)    //reg addition, new obj created
	sub(Rational obj)    //reg subtraction, new obj created
	mul(Rational obj)    //reg multiplication, new obj created
	div(Rational obj)    //reg division, new obj created
	addInPlace(Rational obj)    //in place addition, no new obj created
	subInPlace(Rational obj)    //in place subtraction, no new obj created
	mulInPlace(Rational obj)    //in place multiplication, no new obj created
	divInPlace(Rational obj)    //in place division, no new obj created
	main()    //perform all tests


Rational folder contains the implementation in C++
