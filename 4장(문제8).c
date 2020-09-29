#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	if (N % 2 == 0)
	{
		printf("%s", "even");
	}
	else
	{
		printf("%s", "odd");
	}
	return 0;
}