#include <stdio.h>

int main(void)
{
	double x, y;
	printf("가로: ");
	scanf("%lf", &x);
	printf("세로: ");
	scanf("%lf", &y);
	printf("넓이-> %lf", x * y);
}