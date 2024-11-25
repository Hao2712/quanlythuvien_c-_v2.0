#include <iostream>
#include <vector>
#include <string>
#include "library.hpp"

void Library::addBook(Book* book) {
    books.push_back(book);
}

void Library::displayBooks() {
    std::cout << "Danh sach cac sach trong thu vien:\n" << std::endl;
    for(auto book : books) {
        book->displayBookInfo();
        std::cout << "---------------------\n";
    }
}

void Library::searchBookByTitle(std::string title) {
    bool found = false;
    for(auto book : books) {
        if(book->getTitle() == title) {
            std::cout << "Thong tin sach tim duoc" << std::endl;
            book->displayBookInfo();
            std::cout << "---------------------\n";
            found = true;
        }
    }
    if(!found) {
        std::cout << "Khong tim thay sach" << std::endl;
    }
}

Library::~Library() {
            for(auto book : books) {
                delete book;
            }
            books.clear();
        }