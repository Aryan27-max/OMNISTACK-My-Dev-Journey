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
        area = Math.PI * Math.pow(radius, 2);
        volume = (4.0 / 3.0) * Math.PI * Math.pow(radius, 3);

        System.out.printf("The circunference of the circle is: %.2fcm²\n", circumference );
        System.out.printf("The area of the circle is: %.2fcm²\n", area  );
        System.out.printf("The area of the volume is: %.2fcm^3\n", volume );

        scanner.close();
    }
}
