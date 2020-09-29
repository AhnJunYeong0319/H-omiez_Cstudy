#include <stdio.h>

int main(void)
{
	int number, hour, minute, second; // numberÀº kÃÊ
	scanf("%d", &number);
	hour = number / 3600;
	minute = (number - hour*3600) / 60;
	second = number % 60;
	printf("%d:%d:%d", hour, minute, second);
	return 0;
}