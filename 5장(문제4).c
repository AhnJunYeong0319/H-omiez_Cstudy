#include <stdio.h>

int main(void)
{
	char alphabet;
	scanf("%c", &alphabet);
	if (('a' <= alphabet) && (alphabet <= 'z'))
	{
		printf("%c", alphabet - 32);
	}
	else if (('A' <= alphabet) && (alphabet <= 'Z'))
	{
		printf("%c", alphabet + 32);
	}
	else
	{
		printf("none");
	}
	return 0;
}