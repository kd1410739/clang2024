#include <stdio.h>
main()
{
	char m;
	printf("1��������?");
	scanf("%c", &m);
	if (m >= 'A' && m <= 'Z')
	{
		printf("�ϊ����ʂ�%c\n", m + 0x20);
	}
	else
	{
		if (m >= 'a' && m <= 'z')
		{
			printf("�ϊ����ʂ�%c\n", m - 0x20);
		}
		else
		{
			printf("%c\n", m);
		}
	}
}