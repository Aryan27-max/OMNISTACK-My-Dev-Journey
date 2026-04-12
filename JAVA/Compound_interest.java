import java.util.Scanner;

public class Compound_interest {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        double principal;
        double rate;
        int timesCompounded;
        int years;
        double amount;

        System.out.print("Enter the principal amount: ");
        principal = scanner.nextDouble();

        System.out.print("Enter the interest rate (in %): ");
        rate = scanner.nextDouble() / 100; // converts percentage to decimal (5 → 0.05)

        System.out.print("Enter the number of times compounded per year: ");
        timesCompounded = scanner.nextInt();

        System.out.print("Enter the number of years: ");
        years = scanner.nextInt();

        amount = principal * Math.pow(1 + rate / timesCompounded, timesCompounded * years);

        System.out.printf("Total amount after %d years: %.2f\n", years, amount);

        scanner.close();
    }   
}