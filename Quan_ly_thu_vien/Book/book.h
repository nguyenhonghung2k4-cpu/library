#ifndef BOOK_H
#define BOOK_H

typedef struct {
    int id;            
    char title[100];    
    char author[50];   
    int isBorrowed;    
} Book;

Book createBook(int id);

void printBook(Book b);

#endif