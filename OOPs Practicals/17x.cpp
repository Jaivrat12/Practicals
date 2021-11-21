/*
W.A.P to create 5 book objects, get information of book using getdata() function
including name, price, publication and author. Write search() function to search
a specified book, if book is available return the complete information of book &
print the information of book using putdata() function.
*/
#include <iostream>
using namespace std;

class Book {

    string name, author, publication;
    double price;

    public:
    Book(
        string _name, double _price,
        string _author, string _publication
    ) {
        name = _name; price = _price;
        author = _author; publication = _publication;
    }
};

int main() {

    Book b1("War and Peace", 182.50, "Tolstoy, Leo", "Penguin");
    Book b2("Huckleberry Finn", 57.60, "Twain, Mark", "Penguin");
    Book b3("Anna Karenina", 135.00, "Tolstoy, Leo", "Penguin");
    Book b4("Tom Sawyer", 77.50, "Twain, Mark", "Random House");
    Book b5("Hamlet, Prince of Denmark", 79.50, "Shakespeare", "Signet Classics");
}