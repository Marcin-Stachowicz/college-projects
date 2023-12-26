/**
 * The {@code Wardrobes} class represents a wardrobe as a type of furniture.
 */
class Wardrobes extends Furniture {
    /**
     * Constructs a wardrobe with specified dimensions and default color "Undefined".
     *
     * @param height The height of the wardrobe.
     * @param width  The width of the wardrobe.
     * @param depth  The depth of the wardrobe.
     */
    public Wardrobes(int height, int width, int depth) {
        super(height, width, depth);
    }

    /**
     * Constructs a wardrobe with specified dimensions and color.
     *
     * @param height The height of the wardrobe.
     * @param width  The width of the wardrobe.
     * @param depth  The depth of the wardrobe.
     * @param color  The color of the wardrobe.
     */
    public Wardrobes(int height, int width, int depth, String color) {
        super(height, width, depth, color);
    }

    /**
     * Returns the number of shelves for a wardrobe.
     *
     * @return The number of shelves for a wardrobe.
     */
    @Override
    public int getNumberOfShelves() {
        return numberOfShelves;
    }

    /**
     * Checks if the wardrobe can be moved.
     *
     * @return {@code false} because wardrobes are not movable.
     */
    @Override
    public boolean canBeMoved() {
        return false;
    }
}
