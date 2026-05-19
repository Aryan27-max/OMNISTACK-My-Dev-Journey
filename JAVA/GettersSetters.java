class Cars{

    // these are private attributes that cannot be accesed
    private String model;
    private String color;
    private int price;

    Cars(String model, String color, int price){
        this.model = model;
        this.color = color;
        this.price = price;
    }
    // here are the getter methods even though the 
    // attributes are private we can acess then using the getters methods
    String getmodel(){
        return this.model;
    }
    String getcolor(){
        return this.color;
    }
    int getprice(){
        return this.price;
    }

    // here are the setter funstion this can change the attribute even 
    // though they are private
    void setColor(String color){
        this.color = color;
    } 

    void setPrice(int price){
        this.price = price;
    } 


}

public class GettersSetters {
    public static void main(String[] args) {
        
        Cars car1 = new Cars("Charger", "yellow", 10000);

        car1.setColor ("Blue");
        car1.setPrice(5000);
        System.out.println(car1.getmodel() + " " + car1.getcolor() + " " + car1.getprice());
    }
    
}
