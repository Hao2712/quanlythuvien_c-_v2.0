#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <vector>
#include <string>
#include "book.hpp"

class Library {
    private:
        std::vector<Book*> books;

    public:
        void addBook(Book* book);
        void displayBooks();
        void searchBookByTitle(std::string title);

        ~Library();
};

#endif