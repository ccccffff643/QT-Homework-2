#include "Book.h"

Book::Book()
    : title(),
      author(),
      quantity()
{
}
Book::Book(string title)
    : title(title),
      author(),
      quantity()
{
}
Book::Book(string title, string author)
    : title(title),
      author(author),
      quantity()
{
}
Book::~Book()
{
}

string Book::getTitle(){

    return title;
}
string Book::getAuthor(){

    return author;
}
int Book::getQuantity(){
    
    if(quantity<= 0){

        return -1;
    }
    return quantity;
}

void Book::setTitle(string title){

    this->title= title;
}
void Book::setAuthor(string author){

    this->author= author;
}
void Book::setQuantity(int quantity){

    this->quantity= quantity;
}