import java.util.Random;

public class RandomNums {
    
    public static void main (String[]args){

        Random random = new Random();

        int num1;
        int num2;
        int num3;
        boolean isHeads;

        
        num1 = random.nextInt(1, 101);
        num2 = random.nextInt(1, 101);
        num3 = random.nextInt(1, 101);
        isHeads = random.nextBoolean();


        System.out.println(num1);
        System.out.println(num2);
        System.out.println(num3);
        System.out.println(isHeads);  

    }
}
