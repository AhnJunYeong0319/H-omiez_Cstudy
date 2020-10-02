#include <stdio.h>
#define arrsize 5

int main(void)
{
	int arr[arrsize], sum=0;
	float avg;
	for (int i = 0; i < arrsize; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	avg = ((float)sum / arrsize);
	
	for (int j = 0; j < arrsize; j++)
	{
		if (arr[j] > avg)
		{
			printf("%d\n", arr[j]);
		}
	}
	return 0;
}