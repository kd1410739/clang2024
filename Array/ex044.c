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
	for (i = 0; ch[i] = moji1[i]; i++);
	for (i = 0; moji1[i] = moji2[i]; i++);
	for (i = 0; moji2[i] = ch[i]; i++);
	printf("moji1=%s\tmoji2=%s\n", &moji1[0], &moji2[0]);
}