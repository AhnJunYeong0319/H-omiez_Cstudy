#include <stdio.h>

int main(void) {
	int arr[50] = { 0 }, N, cnt = 0;
	int* p;

	scanf("%d", &N);

	for (p = arr; p < arr + N; p++)
	{
		scanf("%d", p);
	}

	for (p = arr; p < arr + N; p++)
	{
		cnt += 1;
		if (*p == 0)
		{
			cnt -= 1;
			break;
		}
	}

	printf("%d", cnt);
	return 0;
}