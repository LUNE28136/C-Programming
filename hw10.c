#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
	char name[20];
	char country[20];
	int pop;
}City;

void printCity(int i, City c)
{
	printf("%d. ", i+1);
	printf("%s in %s with a population of %d people \n", c.name, c.country, c.pop);
}

int main(void)
{
	City arr[3];
	printf("Input three cities: \n");
	for (int i = 0; i < 3; i++)
	{
		printf("Name> "); scanf("%s", &arr[i].name);
		printf("Country> "); scanf("%s", &arr[i].country);
		printf("Population> "); scanf("%d", &arr[i].pop);
	}
	printf("\n");

	printf("Printing the three cities: \n");
	for (int i = 0; i < 3; i++)
	{
		printCity(i, arr[i]);
	}
	printf("\n");
	return 0;
}