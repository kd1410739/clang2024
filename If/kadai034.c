#include <stdio.h>
main()
{
	char mo;
	printf("1��������?");
	scanf("%c", &mo);
	if (mo <= 'A' && mo >= 'Z')
	{
		printf("���̕����͑啶���ł�\n");
	}
	else
	{
		if (mo <= 'a' && mo >= 'z')
		{
			printf("���̕����͏������ł�\n");
		}
		else
		{
			printf("�G���[\n");
		}
	}
}