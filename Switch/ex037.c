#include <stdio.h>
main()
{
	char n1;
	printf("���Z�q������:");
	scanf("%c", &n1);

	switch(n1)
	{
	case'+':printf("���Z�ł�\n");
		break;
	case'-':printf("���Z�ł�\n");
		break;
	case'*':printf("��Z�ł�\n");
		break;
	case'/':printf("���Z�ł�\n");
		break;
	case'%':printf("���܂�ł�\n");
		break;
	default:printf("���̑��ł�\n");
	}
}