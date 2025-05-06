#include <stdio.h>

void increment(int *p);

int main(void)
{
 int i =10;
 int *j=&i;

 printf("i is %d\n",i);
 printf("i is also %d\n",*j);

 increment(j);
 printf("i is now %d\n",i);
}

void increment(int *p)
{
 *p = *p+1;
}

