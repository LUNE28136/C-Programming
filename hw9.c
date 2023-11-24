#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void shiftChar(char str[])
{
	const int diff = 'a' - 'A';
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{

		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += diff;
		else if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= diff;
		else
			continue;
	}
}

int main(void)
{
	char str[100];
	fputs("Input> ", stdout);
	fgets(str, sizeof(str), stdin);
	shiftChar(str);

	fputs("Output> ", stdout);
	fputs(str, stdout);
	return 0;
}
