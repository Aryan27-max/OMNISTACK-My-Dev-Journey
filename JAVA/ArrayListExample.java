import java.util.ArrayList;

public class ArrayListExample {
    public static void main(String[] args) {
        
        ArrayList<String> Fruits = new ArrayList<>();

        Fruits.add("Apple");
        Fruits.add("Banana");
        Fruits.add("Pineapple");
        Fruits.add("Coconut");
        Fruits.add("Orange");

        // Fruits.remove(1);
        Fruits.set(0, "Kiwi");

        System.out.print(Fruits);
    }    
}
