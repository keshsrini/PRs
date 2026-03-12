// Fix the missing return statement
public class MissingReturn {
    public static int multiply(int a, int b) {
        int result = a * b;
    }
    
    public static void main(String[] args) {
        System.out.println(multiply(5, 3));
    }
}
