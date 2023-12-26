/**
 * Main method for testing the functionality of the FibonacciSumCalculator class.
 *
 */
public class Main {

    public static void main(String[] args) {
        int fibonacciSize = 50;
        long sum = FibonacciSumCalculator.getSum(fibonacciSize);
        System.out.println("Sum of the first " + fibonacciSize + " Fibonacci numbers: " + sum);
    }
}
