import java.util.Scanner;

public class Restaraunt_Menu {
    
    public static void main (String[]args){

        Scanner sc = new Scanner(System.in);
        double TotalBill = 0 ;
        
        System.out.println("-------Welcome to Aryans Restaraunt----------");
        System.out.println("Todays Menu - ");
        System.out.println("1. Pizza - $ 4.99");
        System.out.println("2. Burgers - $ 2.49");
        System.out.println("3. pasta - $ 3.49");
        System.out.println("4. Fries - $ 1.49");
        System.out.println("5. Soda - $ 0.99");
        System.out.println("Enter Multiple items (Press 0 to finish) - ");

        while (true){  
            int Selection = sc.nextInt();
            
            if(Selection == 0 ){
                break;
            }

        switch (Selection) {
            case 1 :
            System.out.println("Pizza Added");
            TotalBill += 4.99;
            break;
            
            case 2 :
            System.out.println("Burger Added");
            TotalBill += 2.49;
            break;

            case 3 :
            System.out.println("Pasta Added");
            TotalBill += 3.49;
            break;

            case 4 :
            System.out.println("Fries Added");
            TotalBill += 1.49;
            break;

            case 5 :
            System.out.println("Coke Added");
            TotalBill += 0.99;
            break;

            default:
                System.out.println("Inavlid Selection");
                System.out.println("Please try Again");
        }
    }
     
        System.out.println("Your Total Bill is - $" + TotalBill);
        System.out.println("Thank  you for vising");

        sc.close();

    }

}