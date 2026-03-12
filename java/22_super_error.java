// Fix the super keyword usage
class Parent {
    Parent(int x) {
        System.out.println("Parent: " + x);
    }
}

class Child extends Parent {
    Child() {
        System.out.println("Child");
    }
}

public class SuperError {
    public static void main(String[] args) {
        Child c = new Child();
    }
}
