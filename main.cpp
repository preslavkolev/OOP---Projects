#include <iostream>
#include "Book.h"
using std::cin;
int main() {
    std::cout << " " << std::endl;
    // put in a separete place (if) if the person decides to add a book!
    char author1[30];
    char title1[50];
    char genre1[20];
    char short_summary1[256];
    unsigned int year_of_publish1;
    char key_words1[100];
    double rating1;
    unsigned int isbn1 = 1000;

    char the_check[1024];
    int counter = 0;

    std::cout<<"Enter author:  ";
    cin.getline (author1, 30, '\n');
    std::cout<<"Enter title:  ";
    cin.getline (title1, 50, '\n');
    std::cout<<"Enter genre:  ";
    cin.getline (genre1, 20, '\n');
    std::cout<<"Enter short summary: ";
    cin.getline (short_summary1, 256, '\n');
    std::cout<<"Enter key words: ";
    cin.getline (key_words1, 128, '\n');
    std::cout<<"Enter year: ";
    cin >> year_of_publish1;
    std::cout<<"Enter rating: ";
    cin >> rating1;
    std::cout<<"Enter isbn: ";
    cin >> isbn1;
/*
   std::ifstream check;
   check.open("C:\\Users\\presl\\CLionProjects\\uLibrary\\Library_database.txt");
   if (!check.is_open()){std::cout<<"Error!!! \n "; return -1;}
   while (!check.eof())
   {
       check.getline(the_check , 1024, '\n');
       ++counter;
   }
   isbn+=counter;

   check.close();   */
    Book new_book;
    new_book = Book(author1,title1,genre1,short_summary1,year_of_publish1,key_words1,rating1,isbn1);
    new_book.add_book();




    return 0;
}
