#include <stdio.h>
int handan(char moji);
main()
{
	char moji;
	int cnt;
	printf("�A���t�@�x�b�g1����:");
	scanf("%c", &moji);
	cnt = handan(moji);
	if (cnt == 1)
	{
		printf("�߂�l��%d�Ȃ̂œ��͂��������͑啶���ł�\n", cnt);
	}
	else
	{
		printf("�߂�l��%d�Ȃ̂œ��͂��������͏������ł�\n", cnt);
	}
}

int handan(char moji)
{
	int suu;
	if (moji >= 'A' && moji <= 'Z')
	{
		suu = 1;
	}
	if (moji >= 'a' && moji <= 'z')
	{
		suu = 0;
	}
	return(suu);
}