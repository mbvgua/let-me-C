#include <stdio.h>

void swap(int*, int*);

void swap(int *pa,int *pb){
	int t=*pa;
	*pa=*pb;
	*pb=t;
	printf("swap: *pa=%d,*pb=%d\n",*pa,*pb);
	return;
}

int main(void){
	int a=10;
	int b=11;
	swap(&a,&b);
	printf("main: a=%d,b=%d\n",a,b);
	return 0;
}
