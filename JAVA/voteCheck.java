import java.util.Scanner;

public class voteCheck {

    public static void main (String[] args){
        
        Scanner sc = new Scanner(System.in);

        int age ;

        System.out.print("Please eneter youur age : ");
        age = sc.nextInt();

        if (age> 18){
            System.out.println("You are eligible to vote !!");
        }
        else if (age < 18 ) {
            System.out.println("You are not eligible to vote !!");
        }
        else if (age == 0 ) {
            System.out.println("You are an baby !!");
        }
        else {
        System.out.println("You are not born yet");
    }

    sc.close();
}
}
