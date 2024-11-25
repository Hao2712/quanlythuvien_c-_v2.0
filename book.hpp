#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

class Book {
    protected:
        std::string title;
        std::string author;
        int pubYear;
        float price;

    public:
        Book(std::string t, std::string a, int pY, float p);

        virtual void displayBookInfo();

        std::string getTitle() const;
        std::string getAuthor() const;
        int getPubYear();
        float getPrice();

        void setTitle(const std::string& t);
        void setAuthor(const std::string& a);
        void setPubYear(int year);
        void setPrice(float price);
};

#endif