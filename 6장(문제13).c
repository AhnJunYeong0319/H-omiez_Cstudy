#include <stdio.h>

int main(void)
{
	int N, cnt = 0, sum = 0;
	double avg;
	while (1 == 1)
	{
		scanf("%d", &N);
		if (N > 0)
		{
			if (N <= 100)
			{
				cnt += 1;
				sum += N;
			}
			else
			{
				continue;
			}
		}
		else
		{
			break;
		}
	}
	avg = double(sum / cnt);
	printf("%d %lf %d", sum, avg, cnt);
	return 0;
}