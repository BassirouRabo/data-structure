#include <stdio.h>
#include <stdlib.h>
typedef unsigned char BYTE;

void     something(int a)
{
	printf("%d\n", a);
}

int     main(void)
{
	/*void    (*pointer)(int);

	pointer = &something;
	pointer(42);*/
	int num1 = 4;
	int num2 = 5;
	int *pointer1;
	int *pointer2;

	if (!(pointer1 = (int *)malloc(sizeof(int))))
		return (0);

	if (!(pointer2 = (int *)malloc(sizeof(int))))
		return (0);

	pointer1 = &num1;
	pointer2 = &num2;

	printf("%p\n", pointer1);
	printf("%p\n", pointer2);

	return (0);
}