#include <stdio.h>
main()
{
	char s[100];
	int i;
	printf("���������͂��ĉ�����>");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i]++;
	}
	printf("�Í���������́A%s\n", &s[0]);
}