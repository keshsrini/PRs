// Fix the interface implementation
interface Drawable {
    void draw();
}

class Circle implements Drawable {
    // Missing implementation
}

public class InterfaceError {
    public static void main(String[] args) {
        Circle c = new Circle();
        c.draw();
    }
}
