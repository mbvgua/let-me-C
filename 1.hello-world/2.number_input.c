#include <stdio.h>

int main() {
    int usf, euf;
    printf("What floor are you on?\n");
    scanf("%d", &usf);  //the ambersand allows call by reference and not by value
    printf("The USA floor is %d\n", usf);
    euf = usf-1;
    printf("The EU floor is %d\n", euf);
}