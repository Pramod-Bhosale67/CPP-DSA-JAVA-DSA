
// user defined data type
class Person{

    void info(){
        System.out.println("I'm a Person");
    }
}

class Pramod extends Person{
    void info(){
        System.out.println("I'm a Pramod");
    }
}


public class Main {

    public static void main(String[] args) {

      Pramod pramod = new Pramod();
      pramod.info();

    }
}