/**
 * Zadanie 1. Napisać klasę do obsługi ułamka zwykłego
 * Wymagania:
 * - klasa powinna mieć co najmniej 2 właściwości - licznik i mianownik
 * - klasa powinna zawierać operacje add, subtract, multiply i divide (pamiętamy, że przez zero nie
 dzielimy)
 * - klasa powinna implementować metodę toString()
 * - działanie klasy powinno być przetestowane w metodzie main
 */
public class Main {
    public static void main(String[] args) {
        Fraction fraction1 = new Fraction(3, 4);
        Fraction fraction2 = new Fraction(1, 2);
        System.out.println("Fraction 1: " + fraction1);
        System.out.println("Fraction 2: " + fraction2);
        Fraction sum = fraction1.add(fraction2);
        System.out.println("Sum: " + sum);
        Fraction difference = fraction1.subtract(fraction2);
        System.out.println("Difference: " + difference);
        Fraction product = fraction1.multiply(fraction2);
        System.out.println("Product: " + product);
        try {
            Fraction quotient = fraction1.divide(fraction2);
            System.out.println("Quotient: " + quotient);
        } catch (ArithmeticException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
