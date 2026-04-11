import java.util.Scanner;

public class Adv_Hypot {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double a ;
        double b ;
        double c ;

        System.out.print("Eneter the lnegth of side A : ");
        a = scanner.nextDouble();

        System.out.print("Eneter the lnegth of side B : ");
        b = scanner.nextDouble();

        c = Math.sqrt(Math.pow(a, 2) + Math.pow(b, 2) );

        System.out.print("Hypotenuse is : " + c + "Sq. units");

        scanner.close();
    }
}
