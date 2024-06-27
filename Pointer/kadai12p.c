#include <stdio.h>
main()
{
	char* day[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday",NULL };
	int i;
	for (i = 0; *day != '\0'; i++)
	{
		puts(day[i]);
	}
}