#include <stdio.h>

int main() {
    int myMult();
    int returnVal;

    returnVal = myMult(6,7);
    printf("The answer is %d\n", returnVal);
}

int myMult(a,b)
    int a,b;
{
    int c = a*b;
    return c;
}