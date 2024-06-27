#include <stdio.h>
void renketu(char* moji1, char* moji2);
main()
{
	char moji1[256] = "ŠÖ”", moji2[] = "‚í‚©‚é‚©‚È?";
	printf("”z—ñ moji1:%s\n", moji1);
	printf("”z—ñ moji2:%s\n", moji2);
	renketu(moji1, moji2);
	printf("˜AŒ‹‚³‚ê‚½Œã‚Ì•¶š—ñ moji1:%s\n", moji1);
}

void renketu(char* moji1, char* moji2)
{
	int i, j;
	for (i = 0; *(moji1 + i) != '\0'; i++);
	for (j = 0; *(moji1 + i)=*(moji2+j); i++,j++);
}
