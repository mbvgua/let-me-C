#include <stdio.h>

int main(void){
    // post increment
    int j = 2; 
    printf("Old value of j=%d\n",j);
    int i = 3 + j++;
    printf("j=%d and i=%d\n",j,i);
    printf("New value of j=%d\n",j);

    printf("---------------------\n");

    // pre-increment
    int x = 10; 
    printf("Old value of x=%d\n",x);
    int y = 5 + ++x;
    printf("x=%d and y=%d\n",x,y);
    printf("New value of x=%d\n",x);
}