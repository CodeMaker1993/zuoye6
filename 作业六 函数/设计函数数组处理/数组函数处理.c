#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>



void init(int arr[], int sz) {
	int i = 0; 
	for (i = 0; i < sz; i++) {
		arr[i] = i+1;
	}
};

void empty(int arr[], int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		arr[i] = 0;
	}

}

void reverse(int arr[], int sz) {
	int l = 0; int r = sz-1 ; int h = 0;
	while (l<r)
	{
		h = arr[l];
		arr[l] = arr[r];
		arr[r] = h;
		l++, r--;
		
	}

}

int main( ) {
	int arr[10] = { 0};
	int sz;
		sz = sizeof (arr) / sizeof (arr[0]);
		int i = 0;
		
		for (i = 0; i < sz; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");

		init(arr,sz);
		for (i = 0; i < sz; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");

		empty(arr,sz);

		for (i = 0; i < sz; i++) {
			printf("%d ", arr[i]);
		}

		printf("\n");

		init(arr, sz);
		for (i = 0; i < sz; i++) {
			printf("%d ", arr[i]);
		}

		printf("\n");

		reverse(arr,sz);

		for (i = 0; i < sz; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");

	return 0;
}