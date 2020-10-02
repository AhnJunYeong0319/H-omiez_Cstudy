#include <stdio.h>
#define arrsize 10
int main(void)
{
	int arr[arrsize]; //원소는 1,2,3 중 하나
	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
	for (int i = 0; i < arrsize; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == 1)
		{
			cnt1 += 1;
		}
		else if (arr[i] == 2)
		{
			cnt2 += 1;
		}
		else if (arr[i] == 3)
		{
			cnt3 += 1;
		}
		else
		{
			continue;
		}
	}
	printf("%d:", 1);
	for (int a = 0; a < cnt1; a++)
	{
		printf("*");
	}
	printf("\n%d:", 2);
	for (int a = 0; a < cnt1; a++)
	{
		printf("*");
	}
	printf("\n%d:", 3);
	return 0;
}