#include <iostream>
#include <String>
#include "digitalBook.hpp"

void DigitalBook::displayBookInfo() {
    Book::displayBookInfo();
    std::cout << "File size: " << fileSize << std::endl;
}