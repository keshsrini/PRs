// Fix the comparison operator
public class WrongComparison {
    public static void main(String[] args) {
        int x = 10;
        if(x = 5) {
            System.out.println("x is 5");
        }
    }
}
