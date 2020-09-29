#include <stdio.h>

int main(void)
{
	int x,y;
	printf("생일 입력\n");
	scanf("%d %d", &x, &y);
	printf("생일은 %d월 %d일 입니다.", x, y);
}