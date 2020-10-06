#include <stdio.h>

int main(void)
{
	int x, y, z;
	int *px, *py, *pz, *tmp;
	px = &x;
	py = &y;
	pz = &z;
	
	scanf("%d", px);
	scanf("%d", py);
	scanf("%d", pz);

	tmp = *px;
	*px = *py;
	*py = tmp;

	tmp = *py;
	*py = *pz;
	*pz = tmp;
	
	printf("%d", *px);
	printf("%d", *py);
	printf("%d", *pz);
	return 0;
}