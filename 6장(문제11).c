#include <stdio.h>

int main(void)
{
	int N; //3이상 18이하
	int i, j, k;
	scanf("%d", &N);
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= 6; j++)
		{
			for (k = 1; k <= 6; k++)
			{
				if ((i + j + k) == N)
				{
					printf("%d %d %d\n", i, j, k);
				}
			}
		}
	}
	return 0;
}