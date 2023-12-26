/**
 * The {@code Point2d} class represents a point in 2D space.
 */
class Point2d extends Point {
    /**
     * Constructs a 2D point with specified coordinates.
     *
     * @param x The x-coordinate of the point.
     * @param y The y-coordinate of the point.
     */
    public Point2d(double x, double y) {
        super(x, y);
    }

    /**
     * Prints the 2D point information to the terminal.
     */
    @Override
    public void printInTerminal() {
        System.out.println(toString());
    }
}
