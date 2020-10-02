#include <stdio.h>
#define NUMBER 5
int main(void)
{
	int max, semimax;
	int cnt = 0;
	int arr[NUMBER];
	for (int i = 0; i < NUMBER; i++)
	{
		scanf("%d", &arr[i]);
		if (i == 0)
		{
			max = arr[i];
		}
		else
		{
			if (arr[i] > max)
			{
				max = arr[i];
			}
			else
			{
				continue;
			}
		}
	}
	for (int i = 0; i < NUMBER; i++)
	{
		if (i == 0)
		{
			semimax = arr[i];
		}
		else
		{
			if (arr[i] > semimax)
			{
				semimax = arr[i];
			}
			else
			{
				if (cnt == 0)
				{
					semimax = arr[i];
					cnt += 1;
				}
				else
				{
					continue;
				}
			}

		}
	}

	printf("%d\n", max);
	printf("%d", semimax);
	return 0;
}