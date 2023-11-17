#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double Average(double arr[])
{
	int i;
	double sum = 0;

	for (i = 0; i < 5; i++)
		sum += arr[i];
	return sum / 5;
}

double StandardDeviation(double arr[])
{
	int i;
	double avg1, avg2;

	avg1 = Average(arr);

	for (i = 0; i < 5; i++)
		arr[i] = pow((arr[i] - avg1), 2);

	avg2 = Average(arr);

	return sqrt(avg2);
}

int main(void)
{
	int i;
	double arr[5];

	printf("Enter 5 real numbers: ");
	for (i = 0; i < 5; i++)
		scanf("%lf", &arr[i]);

	printf("Standard Deviation = %.3lf", StandardDeviation(arr));

	return 0;
}