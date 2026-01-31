#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include "C:\Users\Admin\OneDrive\Documents\C cơ bản\DEV_Linux\Quan_ly_thu_vien\Book\book.h"
#include "C:\Users\Admin\OneDrive\Documents\C cơ bản\DEV_Linux\Quan_ly_thu_vien\Users\user.h"

#define MAX_BOOKS 100
#define MAX_USERS 100

/* Khởi tạo hệ thống */
void initSystem();

/* Thêm sách mới */
void addBook();

/* Đăng ký người dùng */
void registerUser();

/* Hiển thị tất cả sách */
void showAllBooks();

/* Hiển thị tất cả người dùng */
void showAllUsers();

/* Mượn sách */
void borrowBook();

/* Trả sách */
void returnBook();

#endif