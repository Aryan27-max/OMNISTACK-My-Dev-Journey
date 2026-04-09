import java.util.Scanner;

public class MathsMethods {
    
    public static void main (String[]args){
        Scanner sc = new Scanner (System.in);

        // the maths class in  lready imprted in the java package 
        // the values of PI and E (eulers constant) are built into java 
        // you can acess them as follows 
        // System.out.println(Math.PI);
        // System.out.println(Math.E);      

        double result ;

        // this Math.pow fn is used to raise the power of a number 
        // this works as Math.pow(base, power)
        result = Math.pow(2,3);
        // this is the modulus or the absolute value method 
        result = Math.abs(3.14);
        //this is the sqrt method 
        result = Math.sqrt(9);
        // this is rounding off method thi srounds off to the nearest number 
        result = Math.round(5.14);
        // this is the celing method i.e. this rounds off to the upper value of the number 
        result = Math.ceil(5.43);
        //this is the floor method this rounds down to the lower value of any number 
        result = Math.floor(8.11) ;

        System.out.println(result);



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
