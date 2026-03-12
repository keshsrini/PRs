// Fix the method overloading
public class MethodOverload {
    public int add(int a, int b) {
        return a + b;
    }
    
    public int add(int a, int b) {
        return a + b + 10;
    }
    
    public static void main(String[] args) {
        MethodOverload obj = new MethodOverload();
        System.out.println(obj.add(5, 3));
    }
}
