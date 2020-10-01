#include <stdio.h>

int main(void)
{
	int ans1, ans2, ans3;
	int res1, res2, res3;
	int strike = 0, ball = 0;
	scanf("%d %d %d", &ans1, &ans2, &ans3);
	scanf("%d %d %d", &res1, &res2, &res3);
	if (ans1 == res1)
	{
		strike += 1;
		if (ans2 == res2)
		{
			strike += 1;
			if (ans3 == res3)
			{
				strike += 1;
				printf("%dS%dB", strike, ball);
			}
			else
			{
				printf("%dS%dB", strike, ball);
			}
		}
		else
		{
			if (ans3 == res3)
			{
				strike += 1;
				printf("%dS%dB", strike, ball);
			}
			else
			{
				if (ans2 == res3)
				{
					ball += 1;
				}
				if (ans3 == res2)
				{
					ball += 1;
				}
				printf("%dS%dB", strike, ball);
			}
		}
	}
	else
	{
		if (ans2 == res2)
		{
			strike += 1;
			if (ans3 == res3)
			{
				strike += 1;
				printf("%dS%dB", strike, ball);
			}
			else
			{
				if (ans1 == res3)
				{
					ball += 1;
				}
				if (ans3 == res1)
				{
					ball += 1;
				}
				printf("%dS%dB", strike, ball);
			}
		}
		else
		{
			if (ans3 == res3)
			{
				if (ans1 == res2)
				{
					ball += 1;
				}
				if (ans2 == res1)
				{
					ball += 1;
				}
				printf("%dS%dB", strike, ball);
			}
			else
			{
				if (ans1 == res2)
				{
					ball += 1;
					if (ans2 == res3)
					{
						ball += 1;
						if (ans3 == res1)
						{
							ball += 1;
							printf("%dS%dB", strike, ball);
						}
					}
				}
				else if (ans1 == res3)
				{
					ball += 1;
					if (ans2 == res1)
					{
						ball += 1;
						if (ans3 == res2)
						{
							ball += 1;
							printf("%dS%dB", strike, ball);
						}
					}
				}
				else
				{

				}
			}
		}
	}
}