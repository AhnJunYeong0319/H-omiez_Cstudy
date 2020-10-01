#include <stdio.h>
#define N 5

int main(void)
{
	int input, cnt=0;
	
	do {
		scanf("%d", &input);
		if (input < N)
		{
			printf("%d<?\n", input);
			cnt += 1;
		}
		else if (input > N)
		{
			printf("%d>?\n", input);
			cnt += 1;
		}
		else
		{
			cnt += 1;
		}
	} while (input != N);

	printf("5==\n");
	printf("%d", cnt);
	return 0;
}
