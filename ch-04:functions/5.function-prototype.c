#include <stdio.h>

int fetty(void);   //function prototype

int main(void)
{
    int i;
    i = fetty();    //can be called since it prototype is above
    printf("i is %d\n",i);
}

int fetty(void) //function definition
{
    return 1738;
}  
