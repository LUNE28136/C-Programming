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

/*
//소수목록 test

int main(void)
{
	int max, num, i;
	printf("Please enter a number: ");
	scanf("%d", &max);
	for(num=1;num<max+1;num++)
	{
		for (i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				break;
			}
		}
		if (num == i)
			printf("%d ", num);
	}
	return 0;
}
*/