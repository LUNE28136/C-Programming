#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, i;
	printf("Please enter a number: ");
	scanf("%d", &num);
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("it is not a prime number.");
			break;
		}
	}
	if (num==i)
		printf("it is a prime number.");
	return 0;
}
