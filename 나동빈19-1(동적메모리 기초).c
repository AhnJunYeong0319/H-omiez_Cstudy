#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int *pi;
	pi = (int*)malloc(sizeof(int)); //malloce = 메모리를 할당해라
		//(int*) : 형변환
	if (pi == NULL)
	{
		printf("동적 메모리 할당에 실패 \n");
		exit(1);
	}
	
	*pi = 100;
	printf("%d\n", *pi);
	// 동적 메모리 할당 해제
	free(pi);
	return 0;
}