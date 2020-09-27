#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char* pc = NULL;
	int i = 0;
	pc = (char*)malloc(100 * sizeof(char));
	if (pc == NULL)
	{
		printf("동적 메모리 할당 실패\n");
		exit(1);
	}
	for (i = 0; i < 26; i++)
	{
		*(pc + i) = 'a' + i;
	}
	//아스키 코드에서 0은 NULL을 의미
	*(pc + i) = 0;

	printf("%s", pc);
	free(pc);
	return 0;
}