#include <stdio.h>
#include "user.h"
#include "../Ultils/ultils.h"

User createUser(int id) {
    User u;
    u.id = id;
    
    printf("Nhap ten nguoi dung: ");
    while (getchar() != '\n');
    fgets(u.name, sizeof(u.name), stdin);
    removeNewline(u.name);

    return u;
}

void printUser(User u) {
    printf("| %-4d | %-30s |\n", u.id, u.name);
}