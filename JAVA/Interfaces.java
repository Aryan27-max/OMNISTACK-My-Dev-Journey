interface Prey {

    void flee();
}

interface Predator {

    void hunt();
}

class Rabbit implements Prey {

    @Override
    public void flee() {

        System.out.println("this is a prey");
    }
}

class fish implements Prey,Predator{

    @Override
    public void flee() {
         System.out.println("this is a prey");
    }

    @Override
    public void hunt(){
        System.out.println("this is a predator");
    };
}

class Eagle implements Predator{

    @Override
    public void hunt(){
        System.out.print("this is a hunter" );
    };
}

public class Interfaces {

    public static void main(String[] args) {

            Rabbit rabbit1 = new Rabbit();
            rabbit1.flee();
    }
}