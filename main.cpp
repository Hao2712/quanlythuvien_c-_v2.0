#include <iostream>
#include <string>
#include "book.hpp"
#include "digitalBook.hpp"
#include "library.hpp"

int main() {
    Library library;
    int choice;
    do {
    std::cout << "1. Them sach " << std::endl;
    std::cout << "2. Them sach dien tu" << std::endl;
    std::cout << "3. Hien thi tat ca sach " << std::endl;
    std::cout << "4. Tim kiem sach theo ten " << std::endl;
    std::cout << "5. Thoat chuong trinh" << std::endl;
    std::cout << "Chon chuc nang: ";
    std::cin >> choice;
    std::cin.ignore();  // Dùng để loại bỏ ký tự '\n' còn lại trong bộ đệm

    switch (choice) {
        case 1: {
            // Thêm sách mới
            std::string title, author;
            int pubYear;
            float price;

            std::cout << "Nhap tieu de sach: ";
            std::getline(std::cin, title);
            std::cout << "Nhap tac gia: ";
            std::getline(std::cin, author);
            std::cout << "Nhap nam xuat ban: ";
            std::cin >> pubYear;
            std::cout << "Nhap gia sach: ";
            std::cin >> price;
            std::cin.ignore();  // Loại bỏ ký tự '\n' còn lại trong bộ đệm

            Book* newBook = new Book(title, author, pubYear, price);
            library.addBook(newBook);
            std::cout << "Sach da duoc them vao thu vien.\n";
            break;
        }
        case 2: {
            // Thêm sách mới
            std::string title, author;
            int pubYear;
            float price, fileSize;

            std::cout << "Nhap tieu de sach: ";
            std::getline(std::cin, title);
            std::cout << "Nhap tac gia: ";
            std::getline(std::cin, author);
            std::cout << "Nhap nam xuat ban: ";
            std::cin >> pubYear;
            std::cout << "Nhap gia sach: ";
            std::cin >> price;
            std::cout << "Nhap dung luong file sach: ";
            std::cin >> fileSize;
            std::cin.ignore();  // Loại bỏ ký tự '\n' còn lại trong bộ đệm

            DigitalBook* newDigitalBook = new DigitalBook(title, author, pubYear, price, fileSize);
            library.addBook(newDigitalBook);
            std::cout << "Sach da duoc them vao thu vien.\n";
            break;
        }
        case 3: {
            // Hiển thị tất cả sách trong thư viện
            library.displayBooks();
            break;
        }
        case 4: {
            // Tìm kiếm sách theo tên
            std::string searchTitle;
            std::cout << "Nhap ten sach can tim: ";
            std::getline(std::cin, searchTitle);
            library.searchBookByTitle(searchTitle);
            break;
        }
        case 5: {
            std::cout << "Thoat chuong trinh.\n";
            break;
        }
        default:
            std::cout << "Lua chon không hop le. Vui long thu lai.\n";
    }
    } while (choice != 5);  // Tiếp tục hiển thị menu cho đến khi người dùng chọn thoát

    return 0;
}
