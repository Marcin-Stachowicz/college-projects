/**
 * The {@code Point} class is an abstract class representing a point in 2D space.
 */
abstract class Point implements Printable {
    protected double x;
    protected double y;

    /**
     * Constructs a 2D point with specified coordinates.
     *
     * @param x The x-coordinate of the point.
     * @param y The y-coordinate of the point.
     */
    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    /**
     * Adds two points and returns a new Point2d.
     *
     * @param a The first point.
     * @param b The second point.
     * @return The sum of the two points as a new Point2d.
     */
    public static Point add(Point a, Point b) {
        return new Point2d(a.x + b.x, a.y + b.y);
    }

    /**
     * Returns a string representation of the point.
     *
     * @return A string representation of the point.
     */
    @Override
    public String toString() {
        return "2D Point: " + "[" + x + ", " + y + "]";
    }
}
