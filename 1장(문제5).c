#include <stdio.h>

int main(void)
{
	int x, y;
	printf("생일 입력\n");
	
	printf("입력 월: ");
	scanf("%d", &x);
	printf("입력 일: ");
	scanf("%d", &y);
	printf("생일은 %d월 %d일 입니다.", x, y);

	return 0;
}