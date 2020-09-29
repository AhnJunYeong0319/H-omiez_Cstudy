#include <stdio.h>

int main(void)
{
	int i, j;
	char x = 'A';
	for (i = 0; i < 4; i++)
	{
		for (j = 3; j > i; j--)
		{
			printf(" ");
		}
		if (i == 0 || i == 3)
		{
			for (int k = 0; k < i+1; k++)
			{
				printf("%c ", x);
			}
		}
		else if (i == 1)
		{
			printf("%c", x);
			for (int p = 0; p < i; p++)
			{
				printf(" ");
			}
			printf("%c", x);
		}
		else
		{
			printf("%c", x);
			for (int p = 0; p < i+1; p++)
			{
				printf(" ");
			}
			printf("%c", x);
		}
		for (j = 3; j > i; j--)
		{
			printf(" ");
		}
		printf("\n");
		
	}
	return 0;
}