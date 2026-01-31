#ifndef USER_H
#define USER_H


typedef struct {
    int id;            
    char name[50];     
} User;

User createUser(int id);
void printUser(User u);

#endif