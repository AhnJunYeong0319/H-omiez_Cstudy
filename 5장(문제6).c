#include <stdio.h>

int main(void)
{
	int a, b, c;
	int max, min;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		max = a;
		min = b;
		if (c > a)
		{
			max = c;
			printf("%d %d", max, min);
		}
		else
		{
			if (c < b)
			{
				min = c;
				printf("%d %d", max, min);
			}
			else
			{
				printf("%d %d", max, min);
			}
		}
	}
	else
	{
		max = b;
		min = a;
		if (c > a)
		{
			if (c > b)
			{
				max = c;
				printf("%d %d", max, min);
			}
			else
			{
				printf("%d %d", max, min);
			}
		}
		else
		{
			min = c;
			printf("%d %d", max, min);
		}
	}
	return 0;
}