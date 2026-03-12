// Fix the override error
class Animal {
    public void sound() {
        System.out.println("Animal sound");
    }
}

class Dog extends Animal {
    public void sound(String type) {
        System.out.println("Bark");
    }
}

public class OverrideError {
    public static void main(String[] args) {
        Animal a = new Dog();
        a.sound();
    }
}
