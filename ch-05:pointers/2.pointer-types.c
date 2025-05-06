#include <stdio.h>

int main(void)
{
	int i;
	float z;
	int *p;
	p=&i;
	printf("The value of address of i is %p\n",&i);
	printf("The value of int-pointer p is %p\n",p);
}
