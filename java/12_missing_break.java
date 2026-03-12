// Fix the missing break
public class MissingBreak {
    public static void main(String[] args) {
        int choice = 1;
        switch(choice) {
            case 1:
                System.out.println("One");
            case 2:
                System.out.println("Two");
            default:
                System.out.println("Other");
        }
    }
}
