#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double km, mile;
	printf("Please enter kilometers: ");
	scanf("%lf", &km);
	mile = km / 1.609;
	printf("%.1f km is equal to %.1f miles.", km, mile);
	return 0;
}
