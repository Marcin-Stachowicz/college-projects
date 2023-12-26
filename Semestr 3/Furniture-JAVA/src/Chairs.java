/**
 * The {@code Chairs} class represents a chair as a type of furniture.
 */
class Chairs extends Furniture {
    /**
     * Constructs a chair with specified dimensions and default color "Undefined".
     *
     * @param height The height of the chair.
     * @param width  The width of the chair.
     * @param depth  The depth of the chair.
     */
    public Chairs(int height, int width, int depth) {
        super(height, width, depth);
    }

    /**
     * Constructs a chair with specified dimensions and color.
     *
     * @param height The height of the chair.
     * @param width  The width of the chair.
     * @param depth  The depth of the chair.
     * @param color  The color of the chair.
     */
    public Chairs(int height, int width, int depth, String color) {
        super(height, width, depth, color);
    }

    /**
     * Returns the number of shelves for a chair, which is always 0.
     *
     * @return The number of shelves for a chair (always 0).
     */
    @Override
    public int getNumberOfShelves() {
        return 0;
    }
}
