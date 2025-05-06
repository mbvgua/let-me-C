#include <stdio.h>

int main(void){
	printf("an int uses %zu bytes of memory\n", sizeof(int));

	int i=10;
	printf("The values of i is %d\n",i);
  printf("And its address is %p\n",(void *)&i);
}
