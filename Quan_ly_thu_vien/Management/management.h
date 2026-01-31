#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include "C:\Users\Admin\OneDrive\Documents\C cơ bản\DEV_Linux\Quan_ly_thu_vien\Book\book.h"
#include "C:\Users\Admin\OneDrive\Documents\C cơ bản\DEV_Linux\Quan_ly_thu_vien\Users\user.h"

#define MAX_BOOKS 100
#define MAX_USERS 100

void initSystem();
void addBook();
void registerUser();
void showAllBooks();
void showAllUsers();
void borrowBook();
void returnBook();
#endif