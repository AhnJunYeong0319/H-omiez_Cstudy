#include <stdio.h>

int threecounter(int a)
{
	int cnt = 0;
	int i= 0;
	for (i = 1; i < a; i *= 10)
	{
		if ((a - 3*i) % (10*i) == 0)
		{
			cnt += 1;
			a -= 3*i;
		}
		else
		{
			// 앞자리수가 있을 가능성을 고려 안함 while ((a - 3 * i) % (10 * i) != 0)
			{
				a -= i;
			}
		}
	}
	return cnt;
}

int main(void)
{
	int N;
	scanf("%d", &N);
	threecounter(N);
	return 0;
}