#include <stdio.h>
#include <string.h>

int main(void)
{
	char inputx[10] = "I Love You";
	char results[5] = "Love";
	strcpy(results, inputx);
	printf("문자열 복사: %s\n", results);
	return 0;
}