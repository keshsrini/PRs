// Fix the constructor
public class ConstructorError {
    private int x;
    
    public void ConstructorError(int val) {
        x = val;
    }
    
    public static void main(String[] args) {
        ConstructorError obj = new ConstructorError(10);
    }
}
