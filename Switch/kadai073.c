#include <stdio.h>
main()
{
	int num;
	char moji;
	printf("10�i���̐���?");
	scanf("%d", &num);
	printf("�A���t�@�x�b�g(o or h or d)?");
	scanf("%*c%c", &moji);
	switch (moji)
	{
	case'o':
	case'O':printf("%o\n", num);
		break;
	case'h':
	case'H':printf("%x\n", num);
		break;
	default:printf("%d\n", num);
	}
}