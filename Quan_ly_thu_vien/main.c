#include <stdio.h>
#include <stdlib.h>
#include "Management/management.h"
#include "Ultils/ultils.h"

int main() {
    int choice;
    initSystem();

    while (1) {
        printf("\n=== QUAN LY THU VIEN ===\n");
        printf("1. Them Sach\n");
        printf("2. Dang Ky Nguoi Dung\n");
        printf("3. Hien Thi Sach\n");
        printf("4. Hien Thi Nguoi Dung\n");
        printf("5. Muon Sach\n");
        printf("6. Tra Sach\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang: ");
        
        if (scanf("%d", &choice) != 1) {
            while(getchar() != '\n');
            choice = -1;
        }

        switch (choice) {
            case 1: addBook(); break;
            case 2: registerUser(); break;
            case 3: showAllBooks(); break;
            case 4: showAllUsers(); break;
            case 5: borrowBook(); break;
            case 6: returnBook(); break;
            case 0: 
                printf("Ket thuc chuong trinh.\n");
                return 0;
            default: 
                printf("Lua chon khong hop le!\n");
        }
    }
    return 0;
}