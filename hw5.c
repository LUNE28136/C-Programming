#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void DtoB(int n)
{
	if (n > 1)
		DtoB(n / 2);
	printf("%d", n % 2);
	return;
}

int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	DtoB(num);
	return 0;
}