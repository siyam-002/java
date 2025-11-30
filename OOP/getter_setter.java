class Car {
    private String name;  // private variable

    // Getter
    public String getName() {
        return name;
    }

    // Setter
    public void setName(String bal) {
        name = bal;
    }
}

public class getter_setter {
    public static void main(String[] args) {
        Car c = new Car();
        c.setName("BMW"); // using setter
        System.out.println(c.getName()); // using getter
    }
}
