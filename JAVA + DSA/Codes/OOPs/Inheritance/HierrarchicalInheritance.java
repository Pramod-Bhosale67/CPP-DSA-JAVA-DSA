
// Hierarchical Inheritance -> One base class & multiple derived class

// Base class
class Person{
    protected int age;
    protected String name;
}

// Derived Class
class Pramod extends Person {

    public Pramod(){
        age = 21;
        name = "Pramod";
    }

    public void showDetails(){
        System.out.println("Name of the person : " + name);
        System.out.println("Age of the person : " + age);
    }
}

// Derived class
class Yash extends Person{

    public Yash(){
        age = 20;
        name = "Yash";
    }
    public void showDetails(){
        System.out.println("Name of the person : " + name);
        System.out.println("Age of the person : " + age);
    }
}

// Derived Class
class Prachi extends Person{

    public Prachi(){
        age = 21;
        name = "Prachi";
    }

    public void showDetails(){
        System.out.println("Name of the person : " + name);
        System.out.println("Age of the person : " + age);
    }
}


public class Main {

    public static void main(String[] args) {

       Pramod pramod = new Pramod();
       Prachi prachi = new Prachi();
       Yash yash = new Yash();

       pramod.showDetails();
       prachi.showDetails();
       yash.showDetails();
    }
}