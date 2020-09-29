#include <stdio.h>
#include <math.h>

int main(void)
{
	float x;
	printf("실수 입력: ");
	scanf("%f", &x);
	printf("반올림 정수 출력: %f", round(x));
	return 0;
}