#include <stdio.h>

int  main(void)
{
	char ch[20];
	char * chp;
	int idx=0;

	gets(ch);
	chp = ch;

	while (0==0)
	{
		if (*(chp + idx) == '#')
		{
			break;
		}
		else
		{
			idx += 1;
			continue;
		}
	}
	
	for (int i = 1; i <= idx; i++)
	{
		printf("%c", *(chp+idx-i));
	}
	return 0;
}