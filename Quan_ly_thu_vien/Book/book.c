#include <stdio.h>
#include <string.h>
#include "book.h"
#include "../Ultils/ultils.h"

Book createBook(int id) {
    Book b;
    b.id = id;
    b.isBorrowed = 0;

    printf("Nhap tua sach: ");
    while (getchar() != '\n'); 
    fgets(b.title, sizeof(b.title), stdin);
    removeNewline(b.title);

    printf("Nhap tac gia: ");
    fgets(b.author, sizeof(b.author), stdin);
    removeNewline(b.author);

    return b;
}

void printBook(Book b) {
    printf("| %-4d | %-30s | %-20s | %-12s |\n", 
           b.id, b.title, b.author, 
           b.isBorrowed ? "Da muon" : "Co san");
}