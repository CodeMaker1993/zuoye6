#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


void exchange(int* a, int* b)
{
	int i = 0;
	i = *a;
	*a = *b;
	*b = i;

}

int main() {

	int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n", a, b);

	exchange(&a,&b);
	printf("a=%d,b=%d\n", a, b);

	return 0;
}