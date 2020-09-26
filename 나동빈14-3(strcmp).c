#include <stdio.h>
#include <string.h>

int main(void)
{
	char inputOne[5];
	char inputTwo[5];
	gets(inputOne);
	gets(inputTwo);
	/// strcmp : 같으면 0, 왼쪽이 크면 -1, 오른쪽이 크면 1
	printf("문자열비교 : %d\n", strcmp(inputOne, inputTwo));
	return 0;
}