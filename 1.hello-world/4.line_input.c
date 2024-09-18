#include <stdio.h>

int main(){
    char my_line[1000];
    printf("Enter line input\n");
    scanf("%[^\n]1000s", my_line); //read either a whole line or stop at a 1000 characters
    printf("Your line is: %s\n", my_line);
}