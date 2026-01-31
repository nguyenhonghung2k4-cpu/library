#include <stdio.h>
#include "management.h"

Book library[MAX_BOOKS];
User users[MAX_USERS];
int bookCount = 0;
int userCount = 0;

void initSystem() {
    bookCount = 0;
    userCount = 0;
}

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Thu vien da day!\n");
        return;
    }
    library[bookCount] = createBook(bookCount + 1);
    bookCount++;
    printf("Them sach thanh cong!\n");
}

void registerUser() {
    if (userCount >= MAX_USERS) {
        printf("Danh sach nguoi dung da day!\n");
        return;
    }
    users[userCount] = createUser(userCount + 1);
    userCount++;
    printf("Dang ky thanh cong!\n");
}

void showAllBooks() {
    printf("\n--- DANH SACH SACH ---\n");
    printf("| ID   | Tua Sach                       | Tac Gia              | Trang Thai   |\n");
    for (int i = 0; i < bookCount; i++) {
        printBook(library[i]);
    }
    printf("-------------------------------------------------------------------------------\n");
}

void showAllUsers() {
    printf("\n--- DANH SACH NGUOI DUNG ---\n");
    printf("| ID   | Ten Nguoi Dung                 |\n");
    for (int i = 0; i < userCount; i++) {
        printUser(users[i]);
    }
    printf("-----------------------------------------\n");
}

void borrowBook() {
    int userID, bookID;
    printf("Nhap ID nguoi muon: ");
    scanf("%d", &userID);
    printf("Nhap ID sach muon muon: ");
    scanf("%d", &bookID);

    int userFound = 0;
    for (int i = 0; i < userCount; i++) {
        if (users[i].id == userID) {
            userFound = 1;
            break;
        }
    }

    if (!userFound) {
        printf("Khong tim thay nguoi dung!\n");
        return;
    }

    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == bookID) {
            if (library[i].isBorrowed) {
                printf("Sach nay da co nguoi muon!\n");
            } else {
                library[i].isBorrowed = 1;
                printf("Muon sach thanh cong!\n");
            }
            return;
        }
    }
    printf("Khong tim thay sach!\n");
}

void returnBook() {
    int bookID;
    printf("Nhap ID sach muon tra: ");
    scanf("%d", &bookID);

    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == bookID) {
            if (!library[i].isBorrowed) {
                printf("Sach nay chua duoc muon!\n");
            } else {
                library[i].isBorrowed = 0;
                printf("Tra sach thanh cong!\n");
            }
            return;
        }
    }
    printf("Khong tim thay sach!\n");
}