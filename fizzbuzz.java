public class fizzbuzz {
  public static void main(String[] args) {
    for (int i = 1; i < 101; i++) {
      if (i % 3 == 0 && i % 7 == 0) {
        System.out.println("fizzbuzz");
      } else if (i % 3 == 0) {
        System.out.println("fizz");
      } else if (i % 7 == 0) {
        System.out.println("Buzz");
      } else {
        System.out.println(i);
      }
    }
}
}
