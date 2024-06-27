#include <stdio.h>
main()
{
	char s[100];
	int i;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢>");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i]++;
	}
	printf("ˆÃ†‰»•¶š—ñ‚ÍA%s\n", &s[0]);
}