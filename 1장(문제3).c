#include <stdio.h>

int main(void)
{
	int i;
	char x;
	printf("정수 입력: ");
	scanf("%c", &x);
	for (i = 0; i < 4; i++)
	{
		if (i == 0 || i == 3)
		{
			printf("%c%c%c%c%c%c\n", x, x, x, x, x, x);
		}
		else
		{
			printf("%c    %c\n", x, x);
		}

	}
	return 0;
}