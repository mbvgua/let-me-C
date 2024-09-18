#include <stdio.h>

// wrong! strings need to be an array of characters
// int main() {
//     int my_name;
//     printf("Enter your name\n");
//     scanf("%s\n", &my_name);
//     printf("Your name is %s\n", my_name);
// }

int main() {
    char my_name[50];
    printf("Enter your name\n");
    scanf("%50s\n", my_name);
    printf("Your name is %s\n", my_name);

}