#include <stdio.h>

int main(void){
    int a=10;
    int y=20;
    char *name = "Helooooo from the";

    printf("variable int = %zu\n",sizeof a);
    printf("expression = %zu\n",sizeof 1+1);
    printf("float = %zu\n",sizeof 3.14);
    printf("string = %zu\n",sizeof name);
    printf("negative int = %zu\n",sizeof -5);
    printf("character = %zu\n",sizeof(char));
    printf("integer = %zu\n",sizeof (int));
    printf("sum = %zu\n",sizeof a+y);
}