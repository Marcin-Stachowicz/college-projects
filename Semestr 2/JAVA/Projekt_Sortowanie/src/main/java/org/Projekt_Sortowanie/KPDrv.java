package org.Projekt_Sortowanie;

public class KPDrv {

    public static void sortowanie_Kopcowanie(int[] liczby) {
        HeapPQ<Integer, String> PQ = new HeapPQ<>();

        for (int i = 0; i < liczby.length; i++) {
            PQ.insert(liczby[i], "");
        }
        for (int i = 0; i < liczby.length; i++) {
            liczby[i] = PQ.removeMin().getKey();
        }
    }

    public static void sortowanie_Wstawianie(int[] liczby) {
        SortedPQ<Integer, String> PQ = new SortedPQ<>();

        for (int i = 0; i < liczby.length; i++) {
            PQ.insert(liczby[i], "");
        }
        for (int i = 0; i < liczby.length; i++) {
            liczby[i] = PQ.removeMin().getKey();
        }
    }

    public static void sortowanie_Wybieranie(int[] liczby) {
        PriorityQueue<Integer, String> PQ = new UnsortedPQ<>();

        for (int i = 0; i < liczby.length; i++) {
            PQ.insert(liczby[i], "");
        }

        for (int i = 0; i < liczby.length; i++) {
            Entry<Integer, String> minEntry = PQ.removeMin();
            liczby[i] = minEntry.getKey();
        }
    }

    public static void main(String[] args) {
        int[] inputSizes = {10000, 100000, 500000, 1000000};

        for (int size : inputSizes) {
            System.out.println("Wielkosc tabeli: " + size);

            int[] numbers = generateRandomNumbers(size);

            long start = System.nanoTime();
            int[] kopcowanieResult = numbers.clone();
            sortowanie_Kopcowanie(kopcowanieResult);
            long finish = System.nanoTime();
            long kopcowanieTime = finish - start;

            start = System.nanoTime();
            int[] wstawianieResult = numbers.clone();
            sortowanie_Wstawianie(wstawianieResult);
            finish = System.nanoTime();
            long wstawianieTime = finish - start;

            start = System.nanoTime();
            int[] wybieranieResult = numbers.clone();
            sortowanie_Wybieranie(wybieranieResult);
            finish = System.nanoTime();
            long wybieranieTime = finish - start;

            System.out.println("Czas sortowania przez kopcowanie: " + kopcowanieTime + " nanosekund");
            System.out.println();

            System.out.println("Czas sortowania przez wstawianie: " + wstawianieTime + " nanosekund");
            System.out.println();

            System.out.println("Czas sortowania przez wybieranie: " + wybieranieTime + " nanosekund");
            System.out.println();
        }
    }

    private static int[] generateRandomNumbers(int size) {
        int[] numbers = new int[size];
        for (int i = 0; i < size; i++) {
            numbers[i] = (int) (Math.random() * size);
        }
        return numbers;
    }
}
