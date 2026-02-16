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
        sc.nextLine();
        //whenever u use the nextInt method remember to put a scanner.nextLine to
        // remove the next line buffer like down here cause we are usiing the nextInt methid 
        // so we uuse the nextLine() mebthod


        System.out.print("Enter your gpa: ");
        double gpa = sc.nextDouble();

        System.out.print("are you a student (true/false): ");
        boolean isStudent= sc.nextBoolean();

        System.out.println("Your name is " + name );
        System.out.println("You are " + age + " years old " );
        System.out.println("Your gpa is " + gpa );
        System.out.println("Your student status is " + isStudent );

        sc.close();
    }
}




