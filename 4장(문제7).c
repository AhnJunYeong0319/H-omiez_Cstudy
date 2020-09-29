#include <stdio.h>

int main(void)
{
	char N;
	scanf("%c", &N);
	//N = getchar();
	if ((('a' <= N) && (N <='z')) || (('A' <= N) && (N <= 'Z')))
	{
		printf("%d", 1);
	}
	else
	{
		printf("%d", 0);
	}
	return 0;
}