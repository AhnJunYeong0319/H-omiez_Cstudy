#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	if (N < 0)
	{
		printf("cold, indoor");
	}
	else if ((0 <= N) && (N < 40))
	{
		printf("moderate, outdoor");
	}
	else
	{
		printf("hot, indoor");
	}
	return 0;
}