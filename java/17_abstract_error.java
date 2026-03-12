// Fix the abstract class error
abstract class Shape {
    abstract void draw();
}

public class AbstractError {
    public static void main(String[] args) {
        Shape s = new Shape();
        s.draw();
    }
}
