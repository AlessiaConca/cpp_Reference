/*
we can overload the stream insertion (<<) and extraction (>>) operators so our classes work seamlessly with cout, cin, and other streams.
*/

#include <iostream>
#include <sstream>
#include "custom_stream.hpp"
using namespace std;
// Overload the stream insertion operator (<<) for Book objects
ostream& operator<<(ostream& os, const Book& bk) {
    // Output the book's title and number of pages to the stream
    os << bk.title << " has " << bk.pages << " pages";
    return os;
}

// Overload the stream extraction operator (>>) for Book objects
istream& operator>>(istream& is, Book& bk) {
    // Read the book's title and number of pages from the stream
    is >> bk.title >> bk.pages;
    return is;
}

int main() {
    // Create a stringstream initialized with book data
    stringstream phys("Physics 650");
    Book myBook;
    // Extract data from the stream into the Book object
    phys >> myBook;
    // Output the Book object using the overloaded << operator
    cout << myBook;
    return 0;
}
