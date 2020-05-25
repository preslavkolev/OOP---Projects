//
// Created by Presli Kolev on 5/25/2020.
//

#include "Book.h"


Book :: Book (const Book& other){

    this -> author = new (std::nothrow) char [strlen(author) + 1];
    strcpy(this->author, other.author);
    this -> title = new (std::nothrow) char [strlen(title) + 1];
    strcpy(this->title, other.title);
    this -> genre = new (std::nothrow) char [strlen(genre) + 1];
    strcpy(this->genre, other.genre);
    this -> short_summary = new (std::nothrow) char [strlen(short_summary) + 1];
    strcpy(this->short_summary, other.short_summary);
    year_of_publish = other.year_of_publish;
    this -> key_words = new (std::nothrow) char [strlen(key_words) + 1];
    strcpy(this->key_words, other.key_words);
    rating = other.rating;
    isbn = other.isbn;

}


Book& Book::operator=(const Book& other) {


    if (this != &other)
    {
        delete [] this->author;
        delete [] this->title;
        delete [] this->genre;
        delete [] this->short_summary;
        delete [] this->key_words;
        this -> author = new (std::nothrow) char [strlen(author) + 1];
        strcpy(this->author, other.author);
        this -> title = new (std::nothrow) char [strlen(title) + 1];
        strcpy(this->title, other.title);
        this -> genre = new (std::nothrow) char [strlen(genre) + 1];
        strcpy(this->genre, other.genre);
        this -> short_summary = new (std::nothrow) char [strlen(short_summary) + 1];
        strcpy(this->short_summary, other.short_summary);
        this -> key_words = new (std::nothrow) char [strlen(key_words) + 1];
        strcpy(this->key_words, other.key_words);
        year_of_publish = other.year_of_publish;
        rating = other.rating;
        isbn = other.isbn;
    }
    return *this;
}

Book :: ~Book(){
    delete [] this->author;
    delete [] this->title;
    delete [] this->genre;
    delete [] this->short_summary;
    delete [] this->key_words;
}



void Book :: add_book() {
    std::ofstream new_book;
    new_book.open("Library_database.txt", std::ios::out | std::ofstream::app);
    if (!new_book.is_open())
    {
        std::cout<< "Error : Could not open file! \n";
        return;
    }
    new_book << this -> author << " " << this -> title << " " << this -> genre << " " <<this -> short_summary <<
    " " << this -> year_of_publish << " " << this -> key_words << " " <<this -> rating << "/10 " <<this -> isbn;

    new_book.close();



}