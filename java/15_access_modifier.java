// Fix the access modifier
class Person {
    private String name;
}

public class AccessModifier {
    public static void main(String[] args) {
        Person p = new Person();
        p.name = "Alice";
        System.out.println(p.name);
    }
}
