#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i = 5;
    int j = 10;

    printf("--------if...else----------\n");
    if (i) printf("i is True!!!\n");

    printf("----\n");

    if(i>j){
        printf("i is greater than j\n");
    } else {
        printf("i is less than j\n");
    }

    printf("----\n");
    if(i==10){
        printf("i is 10\n");
    } else if(i>=10){
        printf("i is greater then or equal to 10\n");
    } else if(j<i){
        printf("j is less than i\n");
    } else {
        printf("Eh! nikunoma bro\n");
    }

    printf("--------while----------\n");
    while(j>i){
        printf("i=%d, j=%d\n",i,j);
        i++;
    }
    printf("----\n");
    // while(i){
    //     printf("i is always true, so this repeats forever\n");
    // }

    printf("--------do...while----------\n");
    do{
        printf("do...while: j is %d\n",j);
        j++;
    } while(j<10);

    printf("----\n");
    // randomn
    int r;
    do{
        r = rand() %100;
        printf("%d\n",r);
    } while(r!=37);


    printf("--------for----------\n");
    for(i=0;i<20;i++){
        printf("i is %d\n",i);
    }

    printf("----\n");

    // for(;;){
    //     printf("I run foreverrrr!!!");
    // }

    printf("----\n");
    for(i=0,j=999;i<1000;i++,j--){
        printf("i is %d,j is %d\n",i,j);
    }

    printf("--------switch----------\n");
    int goatCount = 2;
    switch(goatCount){
        case 0:
            printf("You have 0 goats.\n");
            break;
        case 1:
            printf("You have 1 goat.\n");
            break;
        case 2:
            printf("You have 2 goats.\n");
            break;
        case 3:
            printf("You have 3 goats.\n");
            break;
        default:
            printf("You have an unkown number of goats.\n");
            break;
        
    }


}