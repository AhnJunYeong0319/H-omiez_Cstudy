#include <stdio.h>

int main(void)
{
	int x1, x2, x3;
	printf("가격 입력: ");
	scanf("%d %d %d", &x1, &x2, &x3);
	printf("상품1: %6d원\n", x1);
	printf("상품2: %6d원\n", x2);
	printf("상품3: %6d원", x3);
	return 0;
}