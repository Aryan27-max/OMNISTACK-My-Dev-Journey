import java.util.Scanner;

class UserIO {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        
        System.out.print("Enter your name: ");
        String name = sc.nextLine();
      
        System.out.print("Enter your age: ");
        int age = sc.nextInt();

        if (age < 18){
            System.out.println("Sorry  " + name + "you are not eligible to vote");
        }else{
            System.out.println("Hello  " + name + "you are eligible to vote");
        }
        sc.close();
    }
}




// import java.util.Scanner;

// // for user IO we use the java scanner class imported from the Utils 
// // libraray in java 

// class UserIO {
//     public static void main (String[] args){
//         Scanner sc = new Scanner (System.in);

//         System.out.print("Enter your name: ");
//         String name = sc.nextLine();

//         System.out.print("enter your age: ");
//         int age = sc.nextInt();

//         System.out.println("your name is " + name + "you are " + age + " years old ");

//         sc.close();
//     }
// }
