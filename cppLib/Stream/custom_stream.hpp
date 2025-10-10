#include <iostream>
using namespace std;

class Book {
public:
  string title;
  int pages;
  Book(string bTitle, int bPages): title(bTitle), pages(bPages){}
  Book() = default;
  friend ostream& operator<<(ostream& os, const Book& bk);
  friend istream& operator>>(istream& is, Book& bk);
};