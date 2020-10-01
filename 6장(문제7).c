#include <stdio.h>

int main(void)
{
	int height, i, n = 1;
	scanf("%d", &height);
	for (i = 0; i <= height; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" %d", n);
			n += 1;
			if (n == 10)
			{
				n = 0;
			}
		}
		printf("\n");
	}
	return 0;
}