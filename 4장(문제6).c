#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	if ((N >= 20) && (N <= 30))
	{
		printf("%d", 1);
	}
	else
	{
		printf("%d", 0);
	}
	return 0;
}