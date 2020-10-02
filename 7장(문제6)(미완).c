#include <stdio.h>
#define SIZE 3
int main(void)
{
	char arr[SIZE];
	char c;
	for (int i = 0; i < SIZE; i++)
	{
		scanf("%c", &arr[i]);
	}
	getchar();
	for (int trial = 0; trial < 5; trial++)
	{
		scanf("%c", &c);
		for (int i = 0; i < 3; i++)
		{
			if (arr[i] == c)
				printf("")
			else
			{
				break;
			}
		}
	}

	return 0;
}