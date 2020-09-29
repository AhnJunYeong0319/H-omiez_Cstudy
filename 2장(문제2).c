#include <stdio.h>

int main(void)
{
	double x = 4.200000, y = 5.100000;
	printf("첫 번째 수:");
	scanf("%lf", &x);
	printf("두 번째 수:");
	scanf("%lf", &y);
	printf("합: %lf", x + y);
	return 0;
}