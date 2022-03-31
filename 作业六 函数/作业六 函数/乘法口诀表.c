
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void biaoge(int a) {
	int i = 1;
	int k = 1;
	for (i = 1; i <= a; i++) 
	{
		for (k = 1; k <= i; k++) 
		{

			printf("%d*%d=%-2d    ",k,i,i*k);
			
		}
		printf("\n");

	}

}


int main( )
{
	int a=0;
	int i=0;
	scanf("%d",&a);
	biaoge(a);
	return 0;
}