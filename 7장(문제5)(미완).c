#include <stdio.h>
#define NUMBER 5
int main(void)
{
	char arr[NUMBER];
	int tmp = 0;
	for (int i = 0; i < NUMBER; i++)
	{
		scanf("%c", &arr[i]);
	}

	for (int j = 0; j < NUMBER; j++)
	{
		printf("%s", arr[NUMBER]);
		tmp = arr[0];
		arr[0] = arr[4];

	}

	return 0;
}
