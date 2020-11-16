class Name{
    Name(String first, String last){
        this.first = first;
        this.last = last;
    }
    private String first, last;
    public String toString(){
        return first+" "+last;
    }
}

class Date{
    Date(int y, int m, int d){
        this.year = y;
        this.month = m;
        this.dom = d;
    }

    private int year, month, dom;
    public String toString(){return month+"/"+dom+"/"+year;}
}
class Person{
    Person(Name n, int age){
        name = n;
        this.age = age;
    }
    int age;
    private Name name;
    int getAge(){return age;}
    Name getName(){return name;}
    public String toString(){return String.format("%s (%d)", name, age);}
}

class Employee extends Person{
    private int id;
    private Date hireDate;
    Employee(Name name, int age, int id, Date date){
        super(name,age);
        this.id = id;
        hireDate = date;
    
    }
    
    Employee(String first, String last, int age, int id, int year, int month, int day){
        super(new Name(first, last), age);
        this.id = id;
        hireDate = new Date(year, month, day);
        
    }
    public String toString(){
        return String.format("%s #%d %s", super.toString(), id, hireDate);
    }
    

}