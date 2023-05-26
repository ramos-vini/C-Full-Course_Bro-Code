#include <stdio.h>
#include <string.h>

typedef char String [25];

typedef struct
{
    String name;
    String password;
    int id;
} User;


int main()
{
    // struct User{
    //     char name[25];
    //     char password[15];
    //     int id;
    // };

    User user1 = {"Billy", "password123", 47};

    User user2;
    strcpy(user2.name, "Johnny");
    strcpy(user2.password, "otherPassword123");
    user2.id = 48; 

    printf("%s\n%s\n%d\n", user1.name, user1.password, user1.id);
    printf("----------\n");
    printf("%s\n%s\n%d\n", user2.name, user2.password, user2.id);

    return 0;
}