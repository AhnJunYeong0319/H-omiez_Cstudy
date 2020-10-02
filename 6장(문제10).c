#include <stdio.h>


int sum_maker(int a)
{
	int t = 1, sum = 0;
	
	while (t < a)
	{
		t *= 10;
	}
	t /= 10;

	while (a > 0)
	{
		sum += a / t;
		a -= (a / t) * t;
		t /= 10;
	}
	return sum;
}



int main(void)
{
	int N;
	scanf("%d", &N);
	printf("%d",sum_maker(N));
	return 0;
}