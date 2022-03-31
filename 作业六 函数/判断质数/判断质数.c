#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int prime(int a) {
	int i = 0;
	if (a <= 2)
		return 1;
	if (a>=2)
	{
	for (i = 2; i < a - 1; i++) {
		int b = 0;
		b = a % i;
		if (b == 0)
			return 0;
		}

	return 1;
	}

	
	
}

int main() {
	int a = 0;
	scanf("%d\n", &a);


	if (1==prime(a))
	printf("%d是质数", a);
	else
	printf("%d不是质数\n", a);


	return 0;
}