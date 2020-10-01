#include <stdio.h>

int main(void)
{
	int N, i=2;
	scanf("%d", &N);
	printf("1");
	while (i <= N)
	{
		if ((N % i) == 0)
			printf(" %d", i);
		i++;
	}
	return 0;
}