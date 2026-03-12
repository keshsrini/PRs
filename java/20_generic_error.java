// Fix the generic type error
import java.util.ArrayList;

public class GenericError {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();
        list.add(10);
        list.add("Hello");
        System.out.println(list);
    }
}
