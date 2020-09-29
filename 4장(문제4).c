#include <stdio.h>

int main(void)
{
	int N, M, T, H; // NÀº 10000~99999
	scanf("%d", &N);
	M = N / 10000;
	T = (N - M * 10000) / 1000;
	H = (N - M * 10000 - T * 1000) / 100;
	if ((H >= 5) & (H != 0))
	{
		H = 0;
		T += 1;
		if (T == 10)
		{
			T = 0;
			M += 1;
		}
		printf("%d", M*10000 + T*1000);
	}
	else
	{
		H = 0;
		printf("%d", M * 10000 + T * 1000);
	}
	
	return 0;
}