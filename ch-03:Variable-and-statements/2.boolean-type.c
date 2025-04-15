#include <stdio.h>
#include <stdbool.h>

int main(void){
    int x = 1;
    bool y = true;
    bool z = false;

    if(x){
        printf("x is true!\n");
    };

    if(y){
        printf("y is aslo true\n");
    }

    if(!z){
        printf("z is false\n");
    }
}