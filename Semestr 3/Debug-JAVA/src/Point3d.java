/**
 * The {@code Point3d} class represents a point in 3D space.
 */
class Point3d extends Point2d {
    private double z;

    /**
     * Constructs a 3D point with specified coordinates.
     *
     * @param x The x-coordinate of the point.
     * @param y The y-coordinate of the point.
     * @param z The z-coordinate of the point.
     */
    public Point3d(double x, double y, double z) {
        super(x, y);
        this.z = z;
    }

    /**
     * Prints the 3D point information to the terminal.
     */
    @Override
    public void printInTerminal() {
        System.out.println("3D Point: " + "[" + x + ", " + y + ", " + z + "]");
    }
}
