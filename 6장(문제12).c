#include <stdio.h>

int main(void)
{
	int N, sum = 0;
	scanf("%d", &N);
	for (int i = 1; ; i++)
	{
		sum += i;
		if (i == N)
		{
			break;
		}
	}
	printf("%d", sum);
	return 0;
}