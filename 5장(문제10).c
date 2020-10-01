#include <stdio.h>

int main(void)
{
	double Kor, Eng, math;
	float avg;
	scanf("%lf %lf %lf", &Kor, &Eng, &math);
	avg = (Kor + Eng + math) / 3;

	if (avg >= 91.5)
	{
		printf("A");
		if ((Kor == 100) || (Eng == 100) || (math == 100))
		{
			printf("Good");
		}
		if ((Kor < 60) || (Eng < 60) || (math < 60))
		{
			printf("Bad");
		}
	}
	else if ((avg >= 85.5) && (avg < 91.5))
	{
		printf("B");
		if ((Kor == 100) || (Eng == 100) || (math == 100))
		{
			printf("Good");
		}
		if ((Kor < 60) || (Eng < 60) || (math < 60))
		{
			printf("Bad");
		}
	}
	else if ((avg >= 80.5) && (avg < 85.5))
	{
		printf("C");
		if ((Kor == 100) || (Eng == 100) || (math == 100))
		{
			printf("Good");
		}
		if ((Kor < 60) || (Eng < 60) || (math < 60))
		{
			printf("Bad");
		}
	}
	else
	{
		printf("F");
		if ((Kor == 100) || (Eng == 100) || (math == 100))
		{
			printf("Good");
		}
		if ((Kor < 60) || (Eng < 60) || (math < 60))
		{
			printf("Bad");
		}
	}
	return 0;
}