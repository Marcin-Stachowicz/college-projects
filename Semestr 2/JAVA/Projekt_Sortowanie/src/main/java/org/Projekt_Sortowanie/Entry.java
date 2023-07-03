package org.Projekt_Sortowanie;

/**
 * @param <K>
 * @param <V>
 * @author lukaszjelen
 */
interface Entry<K, V> {

    K getKey();         //zwraca klucz przechowywany we wpisie KP

    V getValue();       //zwraca wartość przechowywaną we wpisie KP

}
