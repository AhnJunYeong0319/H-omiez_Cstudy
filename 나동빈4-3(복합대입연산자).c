#include <stdio.h>

int main(void)
{
	int x = 100;
	printf("���� ���� %d�Դϴ�. \n", x);
	x += 50;
	printf("���� ���� %d�Դϴ�. \n", x);
	x -= 50;
	printf("���� ���� %d�Դϴ�. \n", x);
	x *= 50;
	printf("���� ���� %d�Դϴ�. \n", x);
	x /= 50;
	printf("���� ���� %d�Դϴ�. \n", x);
	x %= 3;
	printf("���� ���� %d�Դϴ�. \n", x);
	return 0;
}