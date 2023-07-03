package com.example.bazaDanych;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;
import java.util.Optional;



@Controller
public class BookController {
    @Autowired
    public BookRepository bookRepository;

    @PostMapping("/dodaj")
    public String dodajemyDane(
            @RequestParam("isbn") Long isbn,
            @RequestParam("title") String title,
            @RequestParam("author") String author,
            @RequestParam("publisher") String publisher,
            Model model) {
        Book book = new Book(isbn, title, author, publisher);
        System.out.println(book);
        bookRepository.save(book);
        model.addAttribute("books", bookRepository.findAll());
        return "pokaz";
    }

    @GetMapping("/form")
    public String form() {
        return "form";
    }

    @GetMapping("/")
    public String pokaz(Model model) {
        model.addAttribute("books", bookRepository.findAll());
        return "pokaz";
    }

    @GetMapping("/kasuj")
    public String kasuj(@RequestParam("id") Integer id, Model model) {
        bookRepository.deleteById(id);
        model.addAttribute("books", bookRepository.findAll());
        return "pokaz";
    }

    @GetMapping("/wyszukaj")
    public String wyszukaj(@RequestParam("author") String author, Model model) {
        model.addAttribute("books", bookRepository.findAllByAuthor(author));
        return "pokaz";
    }

    @GetMapping(value = "/przekieruj")
    public String przekieruj(@RequestParam("id") Integer id, Model model) {
        Optional<Book> bookOptional = bookRepository.findById(id);
        if (bookOptional.isPresent()) {
            Book book = bookOptional.get();
            model.addAttribute("books", book);
            return "aktualizuj";
        } else {
            return "error";
        }
    }

    @PostMapping("/zapisz")
    public String zapisz(@ModelAttribute("books") Book book, Model model) {
        bookRepository.save(book);
        model.addAttribute("books", bookRepository.findAll());
        return "pokaz";
    }
}