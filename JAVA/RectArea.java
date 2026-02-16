
import java.util.Scanner;

public class RectArea {
    public static void main(String[] args) {
        
        double length = 0 ;
        double breadth = 0 ;
        double Area = 0 ;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the length of the rectangle = ");
        length = sc.nextDouble();

        System.out.print("Enter the breadth of the rectangle = ");
        breadth = sc.nextDouble();

        Area = length * breadth;
        System.out.println("The area of the rectangle is: " + Area + " Square units");

        sc.close();
        }
    }

