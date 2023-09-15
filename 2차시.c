#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main(void)
{
	int num1, num2;
	int num3=30, num4=40;
	num1 = 10;
	num2 = 20;
	printf("num1: %d\nnum2: %d\n", num1, num2);
	printf("num3: %d\nnum4: %d\n", num3, num4);
	return 0;
}
*/
/*
int main(void)
{
	int num1 = 2;
	int num2 = 8;
	int result = num1 + num2;
	printf("덧셈결과: %d\n", result);
	printf("%d + %d = %d\n", num1, num2, result);
	return 0;
}
*/
/*
int main(void)
{
	int a = 9, b = 2;
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d / %d의 나머지 %d\n", a, b, a % b);
	return 0;
}
*/
/*
int main(void)
{
	int a = 2, b = 4, c = 6;
	a += 3;
	b *= 4;
	c %= 5;
	printf("result: %d, %d, %d", a, b, c);
	return 0;
}
*/
/*
int main(void)
{
	int num1=0, num2=0, result;
	printf("정수 1: ");
	scanf_s("%d", &num1);
	printf("정수 2: ");
	scanf_s("%d", &num2);
	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);
	return 0;
}
*/
/*
int main(void)
{
	int num1, num2, num3, result;
	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = num1 + num2 + num3;
	printf("%d + %d + n = %d\n", num1, num2, result);
	return 0;
}
*/
/*
//3.3.
int main(void)
{
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);
	printf("%d의 제곱은 %d", num, num * num);
	return 0;
}
*/
/*
//3.4.
int main(void)
{
	int num1, num2, result;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);
	printf("%d / %d의 몫은 %d, 나머지는 %d", num1, num2, num1 / num2, num1 % num2);
	return 0;
}
*/
/*
//3.5.
int main(void)
{
	int num1, num2, num3, result;
	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("result: %d", result);
	return 0;
}
*/
/*
//4.1
int main(void)
{
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);
	printf("%d", ~(num-1));
	return 0;
}
*/
/*
//4.2.
int main(void)
{
	int num1=3, num2=8, num3=4, result;
	result = num1 << (num2 / 2);
	result = result >> (num3 / 2);
	printf("result: %d", result);
	return 0;
}
*/

//HW
int main(void)
{
	int num1, num2;
	printf("input two integers: ");
	scanf("%d %d", &num1, &num2);
	printf("%d & %d = %d\n", num1, num2, num1 & num2);
	printf("%d | %d = %d\n", num1, num2, num1 | num2);
	printf("%d ^ %d = %d\n", num1, num2, num1 ^ num2);
	return 0;
}
