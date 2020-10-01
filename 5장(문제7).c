#include <stdio.h>

int main(void)
{
	int N, M; // 1~6
	scanf("%d", &N);
	scanf("%d", &M);
	if (N == M)
	{
		printf("RIGHT");
	}
	else if (M < N)
	{
		printf("UP\n");
		scanf("%d", &M);
		if (N == M)
		{
			printf("RIGHT");
		}
		else if (M < N)
		{
			printf("UP\n");
		}
		else
		{
			printf("DOWN\n");
		}
	}
	else
	{
		printf("DOWN\n");
		scanf("%d", &M);
		if (N == M)
		{
			printf("RIGHT");
		}
		else if (M < N)
		{
			printf("UP\n");
		}
		else
		{
			printf("DOWN\n");
		}

	}
	return 0;
}