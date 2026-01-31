#ifndef BOOK_H
#define BOOK_H

/* Định nghĩa cấu trúc sách */
typedef struct {
    int id;             /* ID sách */
    char title[100];    /* Tên sách */
    char author[50];    /* Tên tác giả */
    int isBorrowed;     /* Trạng thái: 0 = Có sẵn, 1 = Đã mượn */
} Book;

/*
 * Tạo một sách mới
 * id: Mã sách
 * Trả về: Struct Book
 */
Book createBook(int id);

/*
 * Hiển thị thông tin sách
 * b: Sách cần hiển thị
 */
void printBook(Book b);

#endif