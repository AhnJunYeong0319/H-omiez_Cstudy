#include <stdio.h>

int main(void)
{
	FILE* fp = NULL; //=NULL�� ���ص� �� ( fopen���� ��ġ ������༭)
	int c;

	fp = fopen("input.txt", "r");

	if (fp == NULL)
	{
		printf("���� ���� ����\n");
	}
	else
	{
		printf("���� ���� ����\n");
	}

	while ((c = fgetc(fp)) != EOF) // fp���Ͽ��� �� ���� ��������
	{
		putchar(c); // �ܼ�â�� ���� ���
	}

	fclose(fp);
	return 0;
}