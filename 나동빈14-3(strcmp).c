#include <stdio.h>
#include <string.h>

int main(void)
{
	char inputOne[5];
	char inputTwo[5];
	gets(inputOne);
	gets(inputTwo);
	/// strcmp : ������ 0, ������ ũ�� -1, �������� ũ�� 1
	printf("���ڿ��� : %d\n", strcmp(inputOne, inputTwo));
	return 0;
}