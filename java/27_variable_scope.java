// Fix the variable scope
public class VariableScope {
    public static void main(String[] args) {
        if(true) {
            int x = 10;
        }
        System.out.println(x);
    }
}
