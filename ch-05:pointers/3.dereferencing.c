#include <stdio.h>

int main(void)
{
	int i;
	int *p;
	p = &i;

	i=10;
	*p=17;

	printf("i is %d\n",i);
	printf("*p is %d\n",*p);
}
