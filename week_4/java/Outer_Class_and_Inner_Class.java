class Outer {
    void display() {
        System.out.println("Outer Class Display");
    }
    class Inner {

        void display() {
            System.out.println("Inner Class Display");
        }
    }
}
public class Main {
    public static void main(String[] args) {
        Outer obj = new Outer();
        obj.display();
        Outer.Inner obj1 = obj.new Inner();
        obj1.display();
    }
}
