import java.util.Scanner;

public class MathsMethods {
    
    public static void main (String[]args){
        Scanner sc = new Scanner (System.in);

        // the maths class in  lready imprted in the java package 
        // the values of PI and E (eulers constant) are built into java 
        // you can acess them as follows 
        System.out.println(Math.PI);
        System.out.println(Math.E);      

        double result ;

        // this Math.pow fn is used to raise the power of a number 
        // this works as Math.pow(number, Degree of exponent)
        result = Math.pow(2,3);

        System.out.println("result");



        // double a ;
        // double b ;
        // double c ;

        // System.out.print("Enter the length of side a: ");
        // a = sc.nextDouble();
        
        // System.out.print("Enter the length of side b: ");
        // b = sc.nextDouble();

        

        sc.close();

    }
}
