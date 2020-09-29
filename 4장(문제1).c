#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, number;
	scanf("%d", &number);
	a = number / 10000;
	b = (number - a * 10000) / 1000;
	c = (number - a * 10000 - b * 1000) / 100;
	d = (number - a * 10000 - b * 1000 - c * 100) / 10;
	e = number - a * 10000 - b * 1000 - c * 100 - 10 * d;
	printf("%dTTHO %dTHO %dHUN %dTEN %d", a, b, c, d, e);
	return 0;
}