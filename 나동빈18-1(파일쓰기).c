#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	fp = fopen("output.txt", "w");
	if (fp == NULL)
	{
		printf("파일 열기 실패\n");
	}
	else
	{
		printf("파일 열기 성공\n");
	}
	fputc('H', fp); //fp 파일에 한 문자 넣기
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);
	fclose(fp);
	return 0;
}