#include <stdio.h>

int main(void)
{
	FILE* fp = NULL; //=NULL은 안해도 됨 ( fopen으로 위치 명시해줘서)
	int c;

	fp = fopen("input.txt", "r");

	if (fp == NULL)
	{
		printf("파일 열기 실패\n");
	}
	else
	{
		printf("파일 열기 성공\n");
	}

	while ((c = fgetc(fp)) != EOF) // fp파일에서 한 글자 가져오기
	{
		putchar(c); // 콘솔창에 문자 출력
	}

	fclose(fp);
	return 0;
}