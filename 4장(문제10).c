#include <stdio.h>

int main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);
	if (N > M)
	{
		printf("%d\n", N / M);
		printf("%d", N % M);
	}
	else
	{
		printf("%d\n", M / N);
		printf("%d", M % N);
	}
	return 0;
}