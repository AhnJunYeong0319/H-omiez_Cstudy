#include <stdio.h>

int main(void)
{
	int N,i;
	scanf("%d", &N);
	for (i = 1; i <= N; i += 1)
	{
		for (int j = 0; j < N - i; j++)
		{
			printf(" ");
		}
		for (int s = 0; s < (2*i)-1; s++)
		{
			printf("*");
		}
		for (int j = 0; j < N - i; j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}