#include <stdio.h>
main()
{
	char s[100];
	int i;
	printf("文字列を入力して下さい>");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i]++;
	}
	printf("暗号化文字列は、%s\n", &s[0]);
}