#ifndef USER_H
#define USER_H

/* Định nghĩa cấu trúc người dùng */
typedef struct {
    int id;             /* ID người dùng */
    char name[50];      /* Tên người dùng */
} User;

/*
 * Tạo người dùng mới
 * id: Mã người dùng
 * Trả về: Struct User
 */
User createUser(int id);

/*
 * Hiển thị thông tin người dùng
 * u: Người dùng cần hiển thị
 */
void printUser(User u);

#endif