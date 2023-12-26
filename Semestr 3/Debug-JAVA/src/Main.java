/**
 * Zadanie 3.
 * Czasami trzeba poprawić kod już napisany. W poniższej implementacji zaszytych jest kilka
 błędów. Proszę o poprawienie kodu w dowolny sposób aby można go było skompilować i
 uruchomić.
 * Podpowiedź - nie wystarczy poprawić tylko podkreślone błędy w IDE, niektóre fragmenty kodu
 trzeba przenieść lub dopisać (aby rozpocząć pracę z kodem po utworzeniu nowego projektu, kod
 można wkleić do pliku Main.java).
 */
public class Main {
    public static void main(String[] args) {
        Point2d a = new Point2d(1, 2);
        Point2d b = new Point2d(3, 4);
        Point2d sum = (Point2d) Point2d.add(a, b);
        sum.printInTerminal();
        Point3d c = new Point3d(5, 6, 7);
        c.printInTerminal();
    }
}
