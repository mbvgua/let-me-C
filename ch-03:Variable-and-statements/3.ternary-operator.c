#include <stdio.h>

int main(void){
    // int x = 100;
    int i = 1;

    while(i <= 100){
        printf("%d is %s\n",i ,i%2 ==0?"even":"odd");
        i++;
    }
}