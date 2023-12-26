/**
 * The {@code Furniture} abstract class represents a generic piece of furniture with common
 * attributes like
 * height, width, depth, and color. It also includes functionality for managing shelves and provides
 * a method
 * to check if the furniture can be moved.
 */
abstract class Furniture implements Movable {
    protected int height;
    protected int width;
    protected int depth;
    protected String color;
    protected int numberOfShelves;

    /**
     * Constructs a piece of furniture with specified dimensions and default color "Undefined".
     *
     * @param height The height of the furniture.
     * @param width  The width of the furniture.
     * @param depth  The depth of the furniture.
     */
    public Furniture(int height, int width, int depth) {
        this.height = height;
        this.width = width;
        this.depth = depth;
        this.color = "Undefined";
    }

    /**
     * Constructs a piece of furniture with specified dimensions and color.
     *
     * @param height The height of the furniture.
     * @param width  The width of the furniture.
     * @param depth  The depth of the furniture.
     * @param color  The color of the furniture.
     */
    public Furniture(int height, int width, int depth, String color) {
        this.height = height;
        this.width = width;
        this.depth = depth;
        this.color = color;
    }

    /**
     * Abstract method to get the number of shelves for a specific type of furniture.
     *
     * @return The number of shelves.
     */
    public abstract int getNumberOfShelves();

    /**
     * Sets the number of shelves for the furniture.
     *
     * @param numberOfShelves The number of shelves to set.
     */
    public void setShelves(int numberOfShelves) {
        this.numberOfShelves = numberOfShelves;
    }

    /**
     * Returns a string representation of the furniture.
     *
     * @return A string representation of the furniture.
     */
    @Override
    public String toString() {
        return "Furniture{" +
                "height=" + height +
                ", width=" + width +
                ", depth=" + depth +
                ", color='" + color + '\'' +
                ", numberOfShelves=" + numberOfShelves +
                '}';
    }

    /**
     * Checks if the furniture can be moved.
     *
     * @return {@code true} if the furniture can be moved; {@code false} otherwise.
     */
    @Override
    public boolean canBeMoved() {
        return true; // Default assumption that furniture can be moved
    }
}
