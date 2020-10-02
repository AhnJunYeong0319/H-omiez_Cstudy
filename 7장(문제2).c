#include <stdio.h>
#define arrsize 7

int main(void)
{
	int cnt=0;
	char arr[arrsize];
	for (int i = 0; i < arrsize; i++)
	{
		scanf("%c", &arr[i]);
	}
	
	for (int j = 0; j < arrsize-2; j++)
	{
		if ((arr[j] == 'c') && (arr[j + 1] == 'a') && (arr[j + 2] == 't'))
		{
			cnt += 1;
		}
	}
	
	printf("%d", cnt);
	return 0;
}