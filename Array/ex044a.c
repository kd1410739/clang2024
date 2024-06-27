#include <stdio.h>
main()
{
	char moji1[80], moji2[80],ch[80];
	int i;
	printf("•¶Žš—ñ1‚ð“ü—Í:");
	scanf("%s", &moji1[0]);
	printf("•¶Žš—ñ2‚ð“ü—Í:");
	scanf("%s", &moji2[0]);
	printf("moji1=%s\tmoji2=%s\n", &moji1[0], &moji2[0]);
	printf("“ü‚ê‘Ö‚¦‚é‚Æ\n");
	printf("moji1=%s\tmoji2=%s\n", &moji2[0], &moji1[0]);
}