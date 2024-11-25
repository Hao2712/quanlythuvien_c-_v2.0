#ifndef DIGITALBOOK_HPP
#define DIGITALBOOK_HPP

#include <string>
#include "book.hpp"

class DigitalBook : public Book {
    private:
        float fileSize;

    public:
        DigitalBook(std::string t, std::string a, int pY, float p, float fs) : Book(t, a, pY, p), fileSize(fs) {}
        void displayBookInfo() override;
};

#endif