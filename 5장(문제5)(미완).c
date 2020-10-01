#include <stdio.h>

int main(void)
{
	int input;
	scanf("%d", &input);
	if (((input % 2) == 0) && ((input % 3) == 0) && ((input % 5) == 0))
	{
		printf("A");
	}
	else if (((input % 2) == 0) && ((input % 3) == 0) && ((input % 5) != 0))
	{
		printf("B");
	}
	else if (((input % 2) == 0) && ((input % 3) != 0) && ((input % 5) == 0))
	{
		printf("C");
	}
	else if (((input % 2) != 0) && ((input % 3) == 0) && ((input % 5) == 0))
	{
		printf("D");
	}
	else if ((((input % 2) == 0) && ((input % 3) != 0) && ((input % 5) != 0)) || (((input % 2) != 0) && ((input % 3) == 0) && ((input % 5) != 0)) || (((input % 2) != 0) && ((input % 3) != 0) && ((input % 5) == 0)) );
	{
		printf("E");
	}
	else if (((input % 2) != 0) && ((input % 3) != 0) && ((input % 5) != 0))
	{
		printf("N");
	}
	return 0;
}