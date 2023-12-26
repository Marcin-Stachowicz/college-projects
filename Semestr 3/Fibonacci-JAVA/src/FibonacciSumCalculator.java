/**
 * Zadanie 3. Napisać klasę, która obliczy sumę szeregu liczb Fibonacciego
 * Wymagania:
 * - klasa powinna zawierać tylko jedną metodę getSum(int fibonacciSize) która zwraca sumę
 kolejnych liczb
 * - klasa powinna działać dla co najmniej 50 liczb Fibonacciego
 */
public class FibonacciSumCalculator {
    /**
     * Calculates the sum of the first N Fibonacci numbers.
     *
     * @param fibonacciSize The number of Fibonacci numbers to consider (must be a positive
     *                      integer).
     * @return The sum of the first N Fibonacci numbers.
     * @throws IllegalArgumentException If the provided Fibonacci size is not a positive integer.
     */
    public static long getSum(int fibonacciSize) {
        if (fibonacciSize <= 0) {
            throw new IllegalArgumentException("Fibonacci size must be a positive integer.");
        }
        long sum = 0;
        long[] fibonacciNumbers = new long[fibonacciSize];
        fibonacciNumbers[0] = 0;
        fibonacciNumbers[1] = 1;
        for (int i = 2; i < fibonacciSize; i++) {
            fibonacciNumbers[i] = fibonacciNumbers[i - 1] + fibonacciNumbers[i - 2];
        }
        for (int i = 0; i < fibonacciSize; i++) {
            sum += fibonacciNumbers[i];
        }
        return sum;
    }
}