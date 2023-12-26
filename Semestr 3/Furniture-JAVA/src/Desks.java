/**
 * The {@code Desks} class represents a desk as a type of furniture.
 */
class Desks extends Furniture {
    /**
     * Constructs a desk with specified dimensions and default color "Undefined".
     *
     * @param height The height of the desk.
     * @param width  The width of the desk.
     * @param depth  The depth of the desk.
     */
    public Desks(int height, int width, int depth) {
        super(height, width, depth);
    }

    /**
     * Constructs a desk with specified dimensions and color.
     *
     * @param height The height of the desk.
     * @param width  The width of the desk.
     * @param depth  The depth of the desk.
     * @param color  The color of the desk.
     */
    public Desks(int height, int width, int depth, String color) {
        super(height, width, depth, color);
    }

    /**
     * Returns the number of shelves for a desk, which is always 0.
     *
     * @return The number of shelves for a desk (always 0).
     */
    @Override
    public int getNumberOfShelves() {
        return 0;
    }
}
