#include <stdio.h>

int main(void){
    int x = (1,2,3);
    printf("x is %d\n",x);

    printf("----------------------\n");

    int y = 20, z = 30;
    printf("y=%d, z=%d\n",y,z);

    printf("----------------------\n");
    for (int i=0,j=20;i<100;i++,j++){
        printf("i=%d,j=%d\n",i,j);
    }
}