public class Printf_meth {
   public static void main(String[] args) {
       
        //printf = it is a method to format the output it is an alternative to print and println
        // %[flag][width][precision][specifier charector]

        String name = "Spongebob";  // literal - %s
        char firstletter = 'S';     // literal - %c
        int age = 19;               // literal - %d
        double height = 60.5;       // literal - %f
        boolean isEmployed = true;  // literal - %b

        System.out.printf("your name is %s\n", name);
        System.out.printf("the 1st letter of your name is %c\n", firstletter);
        System.out.printf("your age is %d\n", age);
        System.out.printf("your height is %.1f\n", height);
        System.out.printf("your employment status is %b\n ", isEmployed);

        System.out.printf("%s is %d years old", name, age);

        //[Flags]

        // + = output a plus
        // , = comma grouping separator (shows 1000 as 1,000)
        // ( = negative numbers are enclosed in ()
        // space = display a minus if negative, space if positive

        double price1 = 9.99;
        double price2 = 100.15;
        double price3 = -54.01;

        System.out.printf("%.2f\n", price1);
        System.out.printf("%.2f\n", price2);
        System.out.printf("%.2f\n", price3);

        //[width]

        int id1 = 1;
        int id2 = 11;
        int id3 = 111;
        int id4 = 1111;

        // 0 = 0 padding (aligns nums nicely)
        System.out.printf("%04d\n", id1);
        System.out.printf("%04d\n", id2);
        System.out.printf("%04d\n", id3);
        System.out.printf("%04d\n", id4);

        // number = right justified padding
        System.out.printf("%4d\n", id1);
        System.out.printf("%4d\n", id2);
        System.out.printf("%4d\n", id3);
        System.out.printf("%4d\n", id4);

        // negitive number = left justifed padding
        System.out.printf("%-4d\n", id1);
        System.out.printf("%-4d\n", id2);
        System.out.printf("%-4d\n", id3);
        System.out.printf("%-4d\n", id4);
 

   } 
}
