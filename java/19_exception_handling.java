// Fix the exception handling
public class ExceptionHandling {
    public static void main(String[] args) {
        try {
            int result = 10 / 0;
        }
        catch(Exception e) {
            System.out.println("Error: " + e);
        }
        finally
            System.out.println("Done");
    }
}
