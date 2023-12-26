public class Fraction {
    private int numerator;
    private int denominator;

    /**
     * Constructs a fraction with the specified numerator and denominator.
     *
     * @param numerator   The numerator of the fraction.
     * @param denominator The denominator of the fraction (must be non-zero).
     * @throws IllegalArgumentException If the denominator is zero.
     */
    public Fraction(int numerator, int denominator) {
        if (denominator == 0) {
            throw new IllegalArgumentException("Denominator cannot be zero.");
        }
        this.numerator = numerator;
        this.denominator = denominator;
        simplifyFraction();
    }

    /**
     * Simplifies the fraction by dividing the numerator and denominator by their greatest common
     * divisor.
     * Adjusts the sign of the fraction if necessary.
     */
    public void simplifyFraction() {
        int gcd = greatestCommonDivisor(Math.abs(numerator), Math.abs(denominator));
        numerator /= gcd;
        denominator /= gcd;
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

    /**
     * Computes the greatest common divisor (GCD) of two numbers using Euclid's algorithm.
     *
     * @param a The first number.
     * @param b The second number.
     * @return The GCD of the two numbers.
     */
    private int greatestCommonDivisor(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    /**
     * Adds the current fraction to another fraction.
     *
     * @param secondFraction The fraction to add.
     * @return A new fraction representing the sum.
     */
    public Fraction add(Fraction secondFraction) {
        int newNumerator = this.numerator * secondFraction.denominator + secondFraction.numerator
                * this.denominator;
        int newDenominator = this.denominator * secondFraction.denominator;
        return new Fraction(newNumerator, newDenominator);
    }

    /**
     * Subtracts another fraction from the current fraction.
     *
     * @param secondFraction The fraction to subtract.
     * @return A new fraction representing the difference.
     */
    public Fraction subtract(Fraction secondFraction) {
        int newNumerator = this.numerator * secondFraction.denominator - secondFraction.numerator
                * this.denominator;
        int newDenominator = this.denominator * secondFraction.denominator;
        return new Fraction(newNumerator, newDenominator);
    }

    /**
     * Multiplies the current fraction by another fraction.
     *
     * @param secondFraction The fraction to multiply by.
     * @return A new fraction representing the product.
     */
    public Fraction multiply(Fraction secondFraction) {
        int newNumerator = this.numerator * secondFraction.numerator;
        int newDenominator = this.denominator * secondFraction.denominator;
        return new Fraction(newNumerator, newDenominator);
    }

    /**
     * Divides the current fraction by another fraction.
     *
     * @param secondFraction The fraction to divide by.
     * @return A new fraction representing the quotient.
     * @throws ArithmeticException If the second fraction is zero.
     */
    public Fraction divide(Fraction secondFraction) {
        if (secondFraction.numerator == 0) {
            throw new ArithmeticException("Cannot divide by zero.");
        }
        int newNumerator = this.numerator * secondFraction.denominator;
        int newDenominator = this.denominator * secondFraction.numerator;
        return new Fraction(newNumerator, newDenominator);
    }

    /**
     * Returns a string representation of the fraction.
     *
     * @return A string in the format "numerator/denominator" or simply "numerator" if the
     * denominator is 1.
     */
    @Override
    public String toString() {
        if (denominator == 1) {
            return Integer.toString(numerator);
        } else {
            return numerator + "/" + denominator;
        }
    }
}
