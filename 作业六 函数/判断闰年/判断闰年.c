#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int a = 0;

int decide(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400) == 0)
		return 1;
	else { return 0; }
	
		
}


int main() {


	scanf("%d", &a);
	
	decide(a);
	if (1 == decide(a))
	{
		printf("%d������\n", a);

	}
	if(0== decide(a))
	printf("%d��������", a);
	return 0;
}