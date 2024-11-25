#include "book.hpp"
#include <iostream>

Book::Book(std::string t, std::string a, int pY, float p) : title(t), author(a), pubYear(pY), price(p) {}

void Book::displayBookInfo() {
    std::cout << "Ten sach: " << title << std::endl;
    std::cout << "Ten tac gia: " << author << std::endl;
    std::cout << "Nam xuat ban: " << pubYear << std::endl;
    std::cout << "Gia sach: " << price << std::endl;
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

int Book::getPubYear() {
    return pubYear;
}

float Book::getPrice() {
    return price;
}

void Book::setTitle(const std::string& t) {
    title = t;
}

void Book::setAuthor(const std::string& a) {
    author = a;
}

void Book::setPubYear(int pY) {
    pubYear = pY;
}

void Book::setPrice(float p) {
    price = p;
}