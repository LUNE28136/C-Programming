#include <stdio.h>

int main(void)
{
	for (int layer = 1; layer <= 5; layer++)
	{
		for (int empty = 5-layer; empty > 0; empty--)
		{
			printf(" ");
		}
		for (int star = 0; star < layer*2-1; star++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}