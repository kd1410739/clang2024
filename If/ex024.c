#include <stdio.h>
main()
{
	char moji1;
	printf("���������:");
	scanf("%c", &moji1);
	if (moji1 >= 'A' && moji1 <= 'Z')
	{
		printf("�啶���ł�\n");
	}
	else
	{
		printf("���̑��̕����ł�\n");
	}
}