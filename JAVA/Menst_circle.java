import java.util.Scanner;

public class Menst_circle {
    public static void main (String[]args){
        // circumference = 2 * Math.PI * radius;
        // area = Math.PI * Math.pow(radius, 2);
        // volume = (4.0 / 3.0) * Math.PI * Math.pow(radius, 3);

        Scanner scanner = new Scanner (System.in);

        double radius;
        double circumference;
        double area;
        double volume;

        System.out.print("Enter the radius of the circle: ");
        radius = scanner.nextDouble();

        circumference = 2 * Math.PI * radius;

        System.out.println("The circunference of the circle is: " + circumference + " sq. units");

        area = Math.PI * Math.pow(radius, 2);

        System.out.println("The area of the circle is: " + area + " sq. units");

        volume = (4.0 / 3.0) * Math.PI * Math.pow(radius, 3);

        System.out.println("The area of the volume is: " + volume + " sq. units");

        scanner.close();
    }
}
