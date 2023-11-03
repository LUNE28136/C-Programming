#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[5];
	int arrlen = sizeof(arr) / sizeof(int);
	printf("Please input five integers: ");
	for (int i = 0; i < arrlen; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("\nOdd number: ");
	for (int i = 0; i < arrlen; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d ", arr[i]);
	}
	
	printf("\nEven number: ");
	for (int j = 0; j < arrlen; j++)
	{
		if (arr[j] % 2 == 0)
			printf("%d ", arr[j]);
	}

	return 0;
}