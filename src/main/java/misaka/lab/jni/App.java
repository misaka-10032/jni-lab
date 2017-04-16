package misaka.lab.jni;

public class App {
  {
    System.loadLibrary("JniHello");
  }

  public native String getGreeting();

  public static void main(String[] args) {
    System.out.println(new App().getGreeting());
  }
}
