#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int *pi;
	pi = (int*)malloc(sizeof(int)); //malloce = �޸𸮸� �Ҵ��ض�
		//(int*) : ����ȯ
	if (pi == NULL)
	{
		printf("���� �޸� �Ҵ翡 ���� \n");
		exit(1);
	}
	
	*pi = 100;
	printf("%d\n", *pi);
	// ���� �޸� �Ҵ� ����
	free(pi);
	return 0;
}