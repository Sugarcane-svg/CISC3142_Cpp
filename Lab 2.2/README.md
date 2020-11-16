#Main theory

Understand instance variable and superclass initialization.

#Instruction

Assuming the existence of the following classes

class Name {

	Name(String first, String last) {…}

	public String toString() {return first + " " + last;}

	private String first, last;
}

class Person {

	// Note the overloaded constructors
	Person(Name name, int age) {…}
	public String toString() {return name + " (" + age + ")";}

	private Name name;
	private int age;
}

class Date {
    
	Date(int year, int month, int dom) {…}
	public String toString() {return month + "/" + dom + "/" + year;}

	private int year, month, dom;
}

Implement a subclass of Person named Employee with the following state/behavior:

    1. an integer instance variable for the employee id

    2. a Date instance variable for the hire date of the employee

    3. two constructors:
        Employee(Name name, int age, id, Date hireDate)

        Employee(String first, String last, int age, int id, int year, int month, int dom)

    4. a toString method that returns a string of the form:
        name (age) #id hire-date
		
(you will probably want to call the corresponding methods of Person and Date in this method)