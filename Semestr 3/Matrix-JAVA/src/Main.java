/**
 * Main method for testing the functionality of the Matrix class.
 */
public class Main {
    public static void main(String[] args) {
        double[][] data1 = {{1, 2}, {3, 4}};
        double[][] data2 = {{5, 6}, {7, 8}};
        Matrix matrix1 = new Matrix(data1);
        Matrix matrix2 = new Matrix(data2);
        System.out.println("Matrix 1:\n" + matrix1);
        System.out.println("Matrix 2:\n" + matrix2);
        Matrix sum = matrix1.add(matrix2);
        System.out.println("Matrix Addition:\n" + sum);
        Matrix product = matrix1.multiply(matrix2);
        System.out.println("Matrix Multiplication:\n" + product);
    }
}