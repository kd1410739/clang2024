#include <stdio.h>
main()
{
	char moji1[80], moji2[80],ch[80];
	int i;
	printf("������1�����:");
	scanf("%s", &moji1[0]);
	printf("������2�����:");
	scanf("%s", &moji2[0]);
	printf("moji1=%s\tmoji2=%s\n", &moji1[0], &moji2[0]);
	printf("����ւ����\n");
	printf("moji1=%s\tmoji2=%s\n", &moji2[0], &moji1[0]);
}