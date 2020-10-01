#include <stdio.h>

int main(void)
{
	int year1, year2, month1, month2, date1, date2;
	scanf("%d/%d/%d", &year1, &month1, &date1);
	scanf("%d/%d/%d", &year2, &month2, &date2);
	if (year1 > year2)
	{
		printf("%d/%d/%d", year2, month2, date2);
	}
	else if (year2 > year1)
	{
		printf("%d/%d/%d", year1, month1, date1);
	}
	else
	{
		if (month1 > month2)
		{
			printf("%d/%d/%d", year2, month2, date2);
		}
		else if (month2 > month1)
		{
			printf("%d/%d/%d", year1, month1, date1);
		}
		else
		{
			if (date1 > date2)
			{
				printf("%d/%d/%d", year2, month2, date2);
			}
			else if (date2 > date1)
			{
				printf("%d/%d/%d", year1, month1, date1);
			}
			else
			{
				printf("%d/%d/%d*", year1, month1, date1);
			}
		}
	}
	return 0;
}