#Main theory

funtion signatures:

    parameters types:

        • if the argument is to be modified, use call-by reference (&); this is true of both fundamental as well as class types

        • if the type is a class, use const-class-by-reference (const … &)

        • if the type is a fundamental, use call-by-value

    return type:

         • if the type is a fundamental, use return by-value

        • if the type is a class, and the value returned is a local variable (or an expression), use return-by-value

        • otherwise, if the type is a class, return by-reference

default constructor:

    Rational(int num = 0, int denom = 1)


#Instruction

* using Rational.java as template to translate .java into .cpp