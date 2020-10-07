#include <stdio.h>
int main(void)
{
	int arr[3];
	int min, tmp;
	int* p;

	for (p = arr; p < arr + 3; p++) {
		scanf("%d", p);
	}

	for (int i = 0; i < 3; i++) {
		for (int j = i; j < 3; j++) {
			min = *(p + i);
			if (*(p+j) < min ) {

				*(p + i) = 
				*(p + i) = min;
			}
		}
	}

	return 0;
}