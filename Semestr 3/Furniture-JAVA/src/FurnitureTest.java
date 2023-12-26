/**
 * The {@code FurnitureTest} class provides a main method for testing the functionality of the
 * Furniture classes.
 */
public class FurnitureTest {
    /**
     * Main method for testing the functionality of the Furniture classes.
     */
    public static void main(String[] args) {
        Desks desk = new Desks(80, 120, 60, "Brown");
        Wardrobes wardrobe = new Wardrobes(180, 90, 60, "White");
        Chairs chair = new Chairs(90, 50, 60, "Black");
        wardrobe.setShelves(4);
        System.out.println("Desk: " + desk);
        System.out.println("Is desk movable? " + desk.canBeMoved());
        System.out.println("Wardrobe: " + wardrobe);
        System.out.println("Is wardrobe movable? " + wardrobe.canBeMoved());
        System.out.println("Chair: " + chair);
        System.out.println("Is chair movable? " + chair.canBeMoved());
    }
}