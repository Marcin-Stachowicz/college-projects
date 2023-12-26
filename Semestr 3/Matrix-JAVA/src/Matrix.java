/**
 * Zadanie 2. Napisać klasę do obsługi macierzy o wymiarach 2x2
 * Wymagania:
 * - klasa powinna przechowywać dane w tablicy
 * - klasa powinna zawierać operacje add i multiply (pamiętamy, że istnieją warunki co do
 rozmiarów macierzy dla tych operacji)
 * - klasa powinna implementować metodę toString()
 * - działanie klasy powinno być przetestowane w metodzie main
 */
public class Matrix {
    private double[][] data;

    /**
     * Constructs a 2x2 matrix with the specified data.
     *
     * @param data The 2x2 array representing the matrix.
     * @throws IllegalArgumentException If the provided data does not have dimensions 2x2.
     */
    public Matrix(double[][] data) {
        if (data.length != 2 || data[0].length != 2 || data[1].length != 2) {
            throw new IllegalArgumentException("Matrix must have dimensions 2x2.");
        }
        this.data = data;
    }

    /**
     * Adds another matrix to the current matrix.
     *
     * @param otherMatrix The matrix to add.
     * @return A new matrix representing the sum of the two matrices.
     */
    public Matrix add(Matrix otherMatrix) {
        double[][] resultData = new double[2][2];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                resultData[i][j] = this.data[i][j] + otherMatrix.data[i][j];
            }
        }
        return new Matrix(resultData);
    }

    /**
     * Multiplies the current matrix by another matrix.
     *
     * @param otherMatrix The matrix to multiply by.
     * @return A new matrix representing the product of the two matrices.
     */
    public Matrix multiply(Matrix otherMatrix) {
        double[][] resultData = new double[2][2];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                resultData[i][j] =
                        this.data[i][0] * otherMatrix.data[0][j] +
                                this.data[i][1] * otherMatrix.data[1][j];
            }
        }
        return new Matrix(resultData);
    }

    /**
     * Returns a string representation of the matrix.
     *
     * @return A string in the format "[a, b; c, d]" where a, b, c, and d are matrix elements.
     */
    @Override
    public String toString() {
        StringBuilder result = new StringBuilder("[");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.append(data[i][j]);
                if (j < 1) {
                    result.append(", ");
                }
            }
            if (i < 1) {
                result.append("; ");
            }
        }
        result.append("]");
        return result.toString();
    }
}