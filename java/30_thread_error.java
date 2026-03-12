// Fix the thread implementation
class MyThread extends Thread {
    public void start() {
        System.out.println("Thread running");
    }
}

public class ThreadError {
    public static void main(String[] args) {
        MyThread t = new MyThread();
        t.start();
    }
}
