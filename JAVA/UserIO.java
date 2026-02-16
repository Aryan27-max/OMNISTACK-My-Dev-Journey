import java.util.Scanner;

// for user IO we use the java scanner class imported from the Utils 
// libraray in java 


class UserIO {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        
        System.out.print("Enter your name: ");
        String name = sc.nextLine();
      
        System.out.print("Enter your age: ");
        int age = sc.nextInt();

        System.out.print("Enter your gpa: ");
        double gpa = sc.nextDouble();

        System.out.print("are you a student (true/false): ");
        boolean isStudent= sc.nextBoolean();

        System.out.println("Your name is " + name );
        System.out.println("You are " + age + " years old " );
        System.out.println("Your gpa is " + name );
        System.out.println("Your student status is " + isStudent );

        sc.close();
    }
}




