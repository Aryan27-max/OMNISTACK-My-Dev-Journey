import java.util.Scanner;

public class Enums1 {

    enum day{
        SUNDAY(1), MONDAY(2), TUESDAY(3), WEDNESDAY(4),THURSDAY(5), FRIDAY(6), SATURDAY(7);

        private final int DayNumber;

        day(int DayNumber){
            this.DayNumber = DayNumber;
        }

        public int getDay(){
            return this.DayNumber;
        }
    }

    public static void main(String[] args) {
        

        try{
            Scanner sc = new Scanner(System.in);
        System.out.print("eneter the day of the week: ");
        String Response = sc.nextLine().toUpperCase();

        day day1 = day.valueOf(Response);

        switch(day1){
            case MONDAY,
                 TUESDAY,
                 WEDNESDAY,
                 THURSDAY,
                 FRIDAY -> System.out.print("this is a weekday");
            case SATURDAY,
                 SUNDAY -> System.out.print("this is a weeekend");
        }
 
        }catch(IllegalArgumentException e){
            System.out.print("please anter an valid day");
        }
    }
}
