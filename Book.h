//
// Created by Presli Kolev on 5/25/2020.
//

#ifndef LIBRARY_BOOK_H
#define LIBRARY_BOOK_H


#include <iostream>
#include <string.h>
#include <fstream>


class Book {
private:
    char* author;          //cout re entry
    char* title;           //cout re entry
    char* genre;           //cout re entry
    char* short_summary;
    unsigned int year_of_publish;
    char* key_words;
    double rating;
    unsigned int isbn;     // cout re entry

public:
    Book():author(nullptr), title(nullptr), genre(nullptr), short_summary(nullptr), year_of_publish(0),
           key_words(nullptr), rating(0.0), isbn(0) {} ;

    Book(char* _author,char* _title,char* _genre,char* _short_summary,unsigned int _year_of_publish,char* _key_words,double _rating,unsigned  int _isbn) :
            author(_author), title(_title), genre(_genre), short_summary(_short_summary), year_of_publish(_year_of_publish),
            key_words(_key_words), rating(_rating), isbn(_isbn){} ;

    Book(const Book&);
    Book& operator=(const Book&);
    ~Book();


    void add_book();



};









#endif //LIBRARY_BOOK_H
