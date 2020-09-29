#include <stdio.h>

int  main(void)
{
	int N, M;
	scanf("%d %d",&N, &M);
	if (N > M)
	{
		printf("%d", N);
	}
	else
	{
		printf("%d", M);
	}
	return 0;
}