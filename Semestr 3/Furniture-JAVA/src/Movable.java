/**
 * Zadanie 1.
 * W pewnej firmie produkowane są meble. Firma posiada 3 linie produkcyjne, które produkują 3
 * rodzaje mebli (biurka - desks, szafy - wardrobes oraz krzesła - chairs). Wszystkie meble posiadają
 * następujące cechy: wysokość, szerokość i głębokość oraz kolor. Niestety, tylko biurka i szafy
 * posiadają półki. Proszę o napisanie klas obsługujących powyższą strukturę obiektową. Klasy
 * powinny spełniać następujące wymagania:
 * - powinna być jedna klasa abstrakcyjna po której dziedziczą pozostałe typy mebli
 * - jedna z klas powinna przeciążać metodę zwracającą liczbę półek podając jako wynik 0
 * - każda klasa powinna posiadać 2 konstruktory: pierwszy tylko z wymiarami, drugi z wymiarami
 * i kolorem
 * - klasy powinny udostępniać metodę do ustawienia liczby półek (void setShelves(int
 * numberOfShelves))
 * - klasy powinny przeciążać metodę toString() aby można było wyświetlać meble na terminalu
 * Zadanie 2.
 * Uzupełnić klasy z zadania 1 tak, aby implementowały one interfejs:
 * public interface Movable {
 * boolean canBeMoved();
 * }
 * Założeniem jest, że szafy nie są przenośne.
 */
interface Movable {
    /**
     * Checks if the furniture can be moved.
     *
     * @return {@code true} if the furniture can be moved; {@code false} otherwise.
     */
    boolean canBeMoved();
}
