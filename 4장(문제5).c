#include <stdio.h>
#include <math.h>

int main(void)
{
	double N, pi = 3.14;
	scanf("%lf", &N);
	printf("%lf", round(pow((N / (2*pi)),2) * pi));
	return 0;
}