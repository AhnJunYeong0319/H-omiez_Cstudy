#include <stdio.h>

int main(void)
{
	int N, H; //10000~99999
	scanf("%d", &N);
	H = (N - (N / 10000) * 10000 - ((N - (N / 10000) * 10000) / 1000) * 1000) / 100;
	printf("%d", H);
	return 0;
}