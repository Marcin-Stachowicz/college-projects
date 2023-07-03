/*
Zadanie 1
Napisz skrypt, który wyświetli wszystkie zakupy w przypadku bazy danych księgarnia lub
wszystkie wypożyczenia w przypadku bazy danych biblioteka z ostatniego roku. Skrypt ma
wyświetlić w jednym zestawieniu dane z kilku tabel. Posortowane po kliencie.


SELECT wypozyczenia.*, wypozyczajacy.imie, wypozyczajacy.nazwisko, wypozyczajacy.email, wypozyczajacy.telefon, wypozyczajacy.adres_zamieszkania FROM wypozyczenia JOIN wypozyczajacy ON wypozyczenia.id_w = wypozyczajacy.id_w WHERE wypozyczenia.data_wyp >= DATE_SUB(NOW(), INTERVAL 1 YEAR) ORDER BY wypozyczenia.id_w ASC;

Zadanie 2
Do zestawienia z zadania 1 proszę ustawić aliasy dla kolumn tak aby były czytelne i
zrozumiałe dla czytającego.

SELECT wypozyczenia.id_wyp AS ID_Wyporzyczenia,wypozyczenia.ISBN,wypozyczenia.id_w AS ID_Wyporzyczajacego,wypozyczenia.data_wyp AS Data_Wyporzyczenia,wypozyczenia.data_oddania AS Data_Oddania, wypozyczajacy.imie AS Imię, wypozyczajacy.nazwisko AS Nazwisko, wypozyczajacy.email AS Email, wypozyczajacy.telefon AS Numer_Telefonu, wypozyczajacy.adres_zamieszkania AS Adres_Zamieszkania FROM wypozyczenia JOIN wypozyczajacy ON wypozyczenia.id_w = wypozyczajacy.id_w WHERE wypozyczenia.data_wyp >= DATE_SUB(NOW(), INTERVAL 1 YEAR) ORDER BY wypozyczenia.id_w ASC;

Zadanie 3
Proszę ustawić aliasy do tabel tak samo jak w zadaniu 2 dla kolumn.

SELECT wypozyczenia.id_wyp AS ID_Wyporzyczenia,wypozyczenia.ISBN,wypozyczenia.id_w AS ID_Wyporzyczajacego,wypozyczenia.data_wyp AS Data_Wyporzyczenia,wypozyczenia.data_oddania AS Data_Oddania, wypozyczajacy.imie AS Imię, wypozyczajacy.nazwisko AS Nazwisko, wypozyczajacy.email AS Email, wypozyczajacy.telefon AS NumerTelefonu, wypozyczajacy.adres_zamieszkania AS AdresZamieszkania FROM wypozyczenia AS Wypozyczenia JOIN wypozyczajacy AS Wypozyczajacy ON wypozyczenia.id_w = wypozyczajacy.id_w WHERE wypozyczenia.data_wyp >= DATE_SUB(NOW(), INTERVAL 1 YEAR) ORDER BY wypozyczenia.id_w ASC;

Zadanie 4
Proszę napisać skrypt sortujący pracowników według daty zatrudnienia. Data ma być
pokazana w sposób czytelny. Trzeba użyć odpowiedniej funkcji omawianej na ostatnim
wykładzie.

SELECT * FROM `pracownicy` ORDER BY STR_TO_DATE(`data_zatrudnienia`, '%Y-%m-%d') ASC;
*/



-- phpMyAdmin SQL Dump
        -- version 5.2.0
        -- https://www.phpmyadmin.net/
        --
        -- Host: 127.0.0.1
        -- Czas generowania: 22 Cze 2023, 19:41
        -- Wersja serwera: 10.4.27-MariaDB
        -- Wersja PHP: 8.2.0

        SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
        START TRANSACTION;
        SET time_zone = "+00:00";


        /*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
        /*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
        /*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
        /*!40101 SET NAMES utf8mb4 */;

        --
        -- Baza danych: `biblioteka`
        --

        -- --------------------------------------------------------

        --
        -- Struktura tabeli dla tabeli `autorzy`
        --

        CREATE TABLE `autorzy` (
        `id_a` int(11) NOT NULL,
        `autor` varchar(255) NOT NULL
        ) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

        --
        -- Zrzut danych tabeli `autorzy`
        --

        INSERT INTO `autorzy` (`id_a`, `autor`) VALUES
        (1, 'Henryk Sienkiewicz'),
        (2, 'Aleksander Fredro'),
        (3, 'Markus Zusak'),
        (4, 'Fiodor Dostojewski'),
        (5, 'Bolesław Prus'),
        (6, 'Władysław Reymont'),
        (7, 'Juliusz Słowacki'),
        (8, 'Stefan Żeromski'),
        (9, 'Stanisław Wyspiański'),
        (10, 'Adam Mickiewicz'),
        (11, 'Witold Gombrowicz'),
        (12, 'Tadeusz Borowski'),
        (13, 'Eliza Orzeszkowa');

        -- --------------------------------------------------------

        --
        -- Struktura tabeli dla tabeli `ksiazki`
        --

        CREATE TABLE `ksiazki` (
        `ISBN` int(11) NOT NULL,
        `tytul` varchar(255) NOT NULL,
        `rok_wydania` int(11) NOT NULL,
        `wydawnictwo` varchar(255) NOT NULL,
        `dostepnosc` tinyint(1) NOT NULL,
        `autor_id` int(11) DEFAULT NULL
        ) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

        --
        -- Zrzut danych tabeli `ksiazki`
        --

        INSERT INTO `ksiazki` (`ISBN`, `tytul`, `rok_wydania`, `wydawnictwo`, `dostepnosc`, `autor_id`) VALUES
        (1, 'Ogniem i mieczem', 1884, 'PWN', 1, 1),
        (2, 'Zemsta', 1834, 'PWN', 1, 2),
        (3, 'Złodziejka Książek', 2005, 'Wydawnictwo Literackie', 0, 3),
        (4, 'Zbrodnia i kara', 1866, 'Wydawnictwo Literackie', 1, 4),
        (5, 'Piekło Pocztowe', 1876, 'Znak', 1, 5),
        (6, 'Chłopi', 1904, 'Znak', 0, 6),
        (7, 'Lalka', 1890, 'Czarne', 1, 5),
        (8, 'Kordian', 1834, 'Czarne', 0, 7),
        (9, 'Ludzie Bezdomni', 1900, 'Wydawnictwo Agora', 1, 8),
        (10, 'Wesele', 1901, 'Drukarnia Narodowa', 1, 9),
        (11, 'Pan Tadeusz', 1834, 'Wydawnictwo Agora', 1, 10),
        (12, 'Quo Vadis', 1896, 'Muza', 1, 1),
        (13, 'Ferdydurke', 1937, 'Muza', 0, 11),
        (14, 'Pożegnanie z Marią', 1948, 'Czytelnik', 1, 12),
        (15, 'Balladyna', 1839, 'Drukarnia Uniwersytetu Wileńskiego', 0, 7),
        (16, 'Nad Niemnem', 1888, 'Wydawnictwo Książka i Wiedza', 1, 13),
        (17, 'Chłopi. Tom II', 1906, 'Książnica', 0, 6),
        (18, 'Latarnik', 1881, 'Tygodnik Ilustrowany', 1, 1),
        (19, 'Krzyżacy', 1900, 'Książka i Wiedza', 1, 1),
        (20, 'Noc Listopadowa', 1832, 'Drukarnia Gazety Narodowej', 0, 10);

        -- --------------------------------------------------------

        --
        -- Struktura tabeli dla tabeli `pracownicy`
        --

        CREATE TABLE `pracownicy` (
        `id_p` int(11) NOT NULL,
        `imie` varchar(255) NOT NULL,
        `nazwisko` varchar(255) NOT NULL,
        `email` varchar(255) NOT NULL,
        `telefon` varchar(255) NOT NULL,
        `adres_zamieszkania` varchar(255) NOT NULL,
        `data_urodzenia` varchar(255) DEFAULT NULL
        ) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

        --
        -- Zrzut danych tabeli `pracownicy`
        --

        INSERT INTO `pracownicy` (`id_p`, `imie`, `nazwisko`, `email`, `telefon`, `adres_zamieszkania`, `data_urodzenia`) VALUES
        (1, 'John', 'Smith', 'john.smith@example.com', '123456789', '123 Main Street, Anytown, USA', '1985-09-12'),
        (2, 'Emily', 'Johnson', 'emily.johnson@example.com', '987654321', '456 Elm Avenue, Springfield, USA', '1990-05-24'),
        (3, 'Michael', 'Williams', 'michael.williams@example.com', '555555555', '789 Oak Lane, Cityville, USA', '1988-11-02');

        -- --------------------------------------------------------

        --
        -- Struktura tabeli dla tabeli `recenzje`
        --

        CREATE TABLE `recenzje` (
        `id_rec` int(11) NOT NULL,
        `ISBN` int(11) NOT NULL,
        `id_w` int(11) NOT NULL,
        `ocena` int(11) NOT NULL,
        `opis` varchar(255) DEFAULT NULL,
        `data recenzji` date NOT NULL
        ) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

        --
        -- Zrzut danych tabeli `recenzje`
        --

        INSERT INTO `recenzje` (`id_rec`, `ISBN`, `id_w`, `ocena`, `opis`, `data recenzji`) VALUES
        (1, 1, 1, 5, 'Świetna książka, polecam!', '2022-03-14'),
        (2, 2, 3, 3, 'Przeciętna lektura, nie powala.', '2022-08-29'),
        (3, 3, 5, 4, 'Bardzo ciekawa historia, warto przeczytać.', '2022-05-06'),
        (4, 4, 2, 2, 'Słaba książka, nie polecam.', '2022-11-14'),
        (5, 5, 4, 5, 'Jedna z najlepszych książek, jakie czytałem.', '2022-07-14'),
        (6, 6, 6, 4, 'Dobra książka, warta uwagi.', '2022-01-30'),
        (7, 7, 8, 1, 'Najgorsza książka, jaką kiedykolwiek przeczytałem.', '2022-03-19'),
        (8, 8, 10, 3, 'Nieco rozczarowująca lektura.', '2022-03-14'),
        (9, 9, 12, 4, 'Ciekawa historia, dobrze się czyta.', '2022-05-14'),
        (10, 10, 14, 5, 'Książka, która zaskakuje, świetnie napisana.', '2022-03-24'),
        (11, 2, 5, 4, 'Bardzo ciekawa książka, polecam!', '2022-03-14'),
        (12, 1, 7, 3, 'Nie najgorsza lektura, ale bez rewelacji.', '2022-07-21'),
        (13, 6, 2, 5, 'Najlepsza książka jaką czytałam w tym roku.', '2022-03-14'),
        (14, 8, 3, 2, 'Bardzo słaba fabuła, nie polecam.', '2022-03-11'),
        (15, 11, 6, 4, 'Wciągająca powieść, idealna na wieczór.', '2022-03-14'),
        (16, 9, 4, 1, 'Kiepsko napisane, nudne dialogi.', '2022-06-14'),
        (17, 10, 8, 3, 'Średniak, ale da się przeczytać.', '2022-09-14'),
        (18, 3, 9, 5, 'Książka, która wciąga i nie pozwala oderwać się od lektury.', '2022-03-14'),
        (19, 5, 10, 4, 'Interesująca historia, warta uwagi.', '2022-11-14'),
        (20, 7, 1, 2, 'Bardzo przewidywalna fabuła, bez oryginalności.', '2022-03-14');

        -- --------------------------------------------------------

        --
        -- Struktura tabeli dla tabeli `rezerwacje`
        --

        CREATE TABLE `rezerwacje` (
        `id_r` int(11) NOT NULL,
        `ISBN` int(11) NOT NULL,
        `id_w` int(11) NOT NULL,
        `data_rez` date NOT NULL
        ) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

        --
        -- Zrzut danych tabeli `rezerwacje`
        --

        INSERT INTO `rezerwacje` (`id_r`, `ISBN`, `id_w`, `data_rez`) VALUES
        (1, 3, 5, '2022-01-01'),
        (2, 1, 2, '2022-02-01'),
        (3, 2, 8, '2022-03-01'),
        (4, 4, 9, '2022-04-01'),
        (5, 6, 14, '2022-05-01'),
        (6, 7, 18, '2022-06-01'),
        (7, 8, 19, '2022-07-01'),
        (8, 9, 20, '2022-08-01'),
        (9, 10, 14, '2022-09-01'),
        (10, 11, 11, '2022-10-01'),
        (11, 15, 2, '2022-11-01'),
        (12, 20, 4, '2022-12-01'),
        (13, 12, 13, '2023-01-01'),
        (14, 2, 7, '2023-02-01'),
        (15, 9, 18, '2023-03-01'),
        (16, 17, 18, '2023-04-01'),
        (17, 3, 8, '2023-05-01'),
        (18, 7, 17, '2023-06-01'),
        (19, 19, 19, '2023-07-01'),
        (20, 6, 12, '2023-08-01');

        -- --------------------------------------------------------

        --
        -- Struktura tabeli dla tabeli `wypozyczajacy`
        --

        CREATE TABLE `wypozyczajacy` (
        `id_w` int(11) NOT NULL,
        `imie` varchar(255) NOT NULL,
        `nazwisko` varchar(255) NOT NULL,
        `email` varchar(255) NOT NULL,
        `telefon` varchar(255) NOT NULL,
        `adres_zamieszkania` varchar(255) NOT NULL,
        `adres_zameldowania` varchar(255) DEFAULT NULL
        ) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

        --
        -- Zrzut danych tabeli `wypozyczajacy`
        --

        INSERT INTO `wypozyczajacy` (`id_w`, `imie`, `nazwisko`, `email`, `telefon`, `adres_zamieszkania`, `adres_zameldowania`) VALUES
        (1, 'Jan', 'Kowalski', 'jan.kowalski@przyklad.pl', '+48123456789', '123 Main Street, Anytown, USA', '123 Main Street, Anytown, USA'),
        (2, 'Anna', 'Nowak', 'anna.nowak@przyklad.pl', '+48123456789', '456 Elm Avenue, Springfield, USA', '456 Elm Avenue, Springfield, USA'),
        (3, 'Piotr', 'Nowicki', 'piotr.nowicki@przyklad.pl', '+48123456789', '789 Oak Lane, Cityville, USA', '789 Oak Lane, Cityville, USA'),
        (4, 'Magdalena', 'Kwiatkowska', 'magdalena.kwiatkowska@przyklad.pl', '+48123456789', '789 Oak Lane, Cityville, USA', '789 Oak Lane, Cityville, USA'),
        (5, 'Marek', 'Szymański', 'marek.szymanski@przyklad.pl', '+48123456789', '321 Maple Drive, Smalltown, USA', '321 Maple Drive, Smalltown, USA'),
        (6, 'Katarzyna', 'Wójcik', 'katarzyna.wojcik@przyklad.pl', '+48123456789', '987 Pine Street, Townsville, USA', '987 Pine Street, Townsville, USA'),
        (7, 'Tomasz', 'Duda', 'tomasz.duda@przyklad.pl', '+48123456789', '654 Cedar Avenue, Villagetown, USA', '654 Cedar Avenue, Villagetown, USA'),
        (8, 'Małgorzata', 'Kaczmarek', 'malgorzata.kaczmarek@przyklad.pl', '+48123456789', '890 Walnut Lane, Boroughville, USA', '890 Walnut Lane, Boroughville, USA'),
        (9, 'Grzegorz', 'Zieliński', 'grzegorz.zielinski@przyklad.pl', '+48123456789', '234 Birch Drive, Countyville, USA', '234 Birch Drive, Countyville, USA'),
        (10, 'Marta', 'Wieczorek', 'marta.wieczorek@przyklad.pl', '+48123456789', '67 Spruce Street, Hamletown, USA', '67 Spruce Street, Hamletown, USA'),
        (11, 'Bartosz', 'Kowalski', 'bartosz.kowalski@example.com', '+48123456789', '901 Willow Avenue, Suburbia, USA', '901 Willow Avenue, Suburbia, USA'),
        (12, 'Wojciech', 'Nowak', 'Wojciech.nowak@example.com', '+48123456789', '345 Juniper Lane, Metropolis, USA', '345 Juniper Lane, Metropolis, USA'),
        (13, 'Kuba', 'Nowicki', 'Kuba.nowicki@example.com', '+48123456789', '678 Aspen Drive, Riverside, USA', '678 Aspen Drive, Riverside, USA'),
        (14, 'Zofia', 'Kwiatkowska', 'Zofia.kwiatkowska@example.com', '+48123456789', '912 Magnolia Street, Oceanview, USA', '912 Magnolia Street, Oceanview, USA'),
        (15, 'Adam', 'Szymański', 'Adam.szymanski@example.com', '+48123456789', '345 Hawthorn Avenue, Mountainville, USA', '345 Hawthorn Avenue, Mountainville, USA'),
        (16, 'Katarzyna', 'Krost', 'katarzyna.wojcik@example.com', '+48123456789', '678 Sycamore Lane, Lakeside, USA', '678 Sycamore Lane, Lakeside, USA'),
        (17, 'Tomasz', 'Wir', 'tomasz.duda@example.com', '+48123456789', '901 Poplar Drive, Beachtown, USA', '901 Poplar Drive, Beachtown, USA'),
        (18, 'Małgorzata', 'Rataj', 'malgorzata.kaczAdam@example.com', '+48123456789', '234 Redwood Street, Hillside, USA', '234 Redwood Street, Hillside, USA'),
        (19, 'Michał', 'Zieliński', 'grzegorz.zielinski@example.com', '+48123456789', '567 Fir Avenue, Meadowville, USA', '567 Fir Avenue, Meadowville, USA'),
        (20, 'Wacław', 'Wieczorek', 'marta.wieczorek@example.com', '+48123456789', '890 Chestnut Lane, Valleytown, USA', '890 Chestnut Lane, Valleytown, USA');

        -- --------------------------------------------------------

        --
        -- Struktura tabeli dla tabeli `wypozyczenia`
        --

        CREATE TABLE `wypozyczenia` (
        `id_wyp` int(11) NOT NULL,
        `ISBN` int(11) NOT NULL,
        `id_w` int(11) NOT NULL,
        `data_wyp` date NOT NULL,
        `data_oddania` date DEFAULT NULL
        ) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

        --
        -- Zrzut danych tabeli `wypozyczenia`
        --

        INSERT INTO `wypozyczenia` (`ISBN`, `id_w`, `data_wyp`, `data_oddania`) VALUES
        (2, 1, '2022-01-01', '2022-01-08'),
        (2, 5, '2022-02-01', '2022-02-08'),
        (2, 7, '2022-03-01', NULL),
        (2, 9, '2022-04-01', NULL),
        (5, 11, '2022-05-01', '2022-05-08'),
        (5, 14, '2022-06-01', NULL),
        (7, 18, '2022-07-01', '2022-07-08'),
        (8, 19, '2022-08-01', NULL),
        (8, 20, '2022-09-01', NULL),
        (12, 17, '2022-12-01', '2022-12-08'),
        (12, 2, '2022-12-01', '2022-12-08'),
        (13, 5, '2023-01-01', NULL),
        (13, 7, '2023-02-01', '2023-02-08'),
        (15, 8, '2023-03-01', NULL),
        (15, 3, '2023-04-01', NULL),
        (18, 12, '2023-05-01', '2023-05-08'),
        (18, 4, '2023-06-01', NULL),
        (19, 16, '2023-07-01', '2023-07-08'),
        (19, 14, '2022-02-15', NULL);

        --
        -- Indeksy dla zrzutów tabel
        --

        --
        -- Indeksy dla tabeli `autorzy`
        --
        ALTER TABLE `autorzy`
        ADD PRIMARY KEY (`id_a`);

        --
        -- Indeksy dla tabeli `ksiazki`
        --
        ALTER TABLE `ksiazki`
        ADD PRIMARY KEY (`ISBN`),
        ADD KEY `fk_ksiazki_autorzy` (`autor_id`);

        --
        -- Indeksy dla tabeli `pracownicy`
        --
        ALTER TABLE `pracownicy`
        ADD PRIMARY KEY (`id_p`);

        --
        -- Indeksy dla tabeli `recenzje`
        --
        ALTER TABLE `recenzje`
        ADD PRIMARY KEY (`id_rec`),
        ADD KEY `ISBN` (`ISBN`),
        ADD KEY `id_w` (`id_w`);

        --
        -- Indeksy dla tabeli `rezerwacje`
        --
        ALTER TABLE `rezerwacje`
        ADD PRIMARY KEY (`id_r`),
        ADD KEY `ISBN` (`ISBN`),
        ADD KEY `id_w` (`id_w`);

        --
        -- Indeksy dla tabeli `wypozyczajacy`
        --
        ALTER TABLE `wypozyczajacy`
        ADD PRIMARY KEY (`id_w`);

        --
        -- Indeksy dla tabeli `wypozyczenia`
        --
        ALTER TABLE `wypozyczenia`
        ADD PRIMARY KEY (`id_wyp`),
        ADD KEY `ISBN` (`ISBN`),
        ADD KEY `id_w` (`id_w`);
 	--
        -- Ograniczenia dla zrzutów tabel
        --

        --
        -- Ograniczenia dla tabeli `ksiazki`
        --
        ALTER TABLE `ksiazki`
        ADD CONSTRAINT `fk_ksiazki_autorzy` FOREIGN KEY (`autor_id`) REFERENCES `autorzy` (`id_a`);

        --
        -- Ograniczenia dla tabeli `recenzje`
        --
        ALTER TABLE `recenzje`
        ADD CONSTRAINT `recenzje_ibfk_1` FOREIGN KEY (`ISBN`) REFERENCES `ksiazki` (`ISBN`),
        ADD CONSTRAINT `recenzje_ibfk_2` FOREIGN KEY (`id_w`) REFERENCES `wypozyczajacy` (`id_w`);

        --
        -- Ograniczenia dla tabeli `rezerwacje`
        --
        ALTER TABLE `rezerwacje`
        ADD CONSTRAINT `rezerwacje_ibfk_1` FOREIGN KEY (`ISBN`) REFERENCES `ksiazki` (`ISBN`),
        ADD CONSTRAINT `rezerwacje_ibfk_2` FOREIGN KEY (`id_w`) REFERENCES `wypozyczajacy` (`id_w`);

        --
        -- Ograniczenia dla tabeli `wypozyczenia`
        --
        ALTER TABLE `wypozyczenia`
        ADD CONSTRAINT `wypozyczenia_ibfk_1` FOREIGN KEY (`ISBN`) REFERENCES `ksiazki` (`ISBN`),
        ADD CONSTRAINT `wypozyczenia_ibfk_2` FOREIGN KEY (`id_w`) REFERENCES `wypozyczajacy` (`id_w`);
        COMMIT;

        /*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
        /*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
        /*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;