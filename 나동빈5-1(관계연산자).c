#include <stdio.h>

int main(void)
{
	int x = 50, y = 30;
	printf("x가 y와 같은가? %d\n", x == y);
	printf("x가 y와 같은가? %d\n", x != y);
	printf("x가 y와 같은가? %d\n", x > y);
	printf("x가 y와 같은가? %d\n", x < y);
	printf("x에 y값 넣으면? %d\n", x = y);
	return 0;
}