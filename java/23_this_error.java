// Fix the this keyword usage
public class ThisError {
    int value;
    
    public void setValue(int value) {
        value = value;
    }
    
    public static void main(String[] args) {
        ThisError obj = new ThisError();
        obj.setValue(10);
        System.out.println(obj.value);
    }
}
