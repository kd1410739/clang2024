#include <stdio.h>
void renketu(char* moji1, char* moji2);
main()
{
	char moji1[256] = "�֐�", moji2[] = "�킩�邩��?";
	printf("�z�� moji1:%s\n", moji1);
	printf("�z�� moji2:%s\n", moji2);
	renketu(moji1, moji2);
	printf("�A�����ꂽ��̕����� moji1:%s\n", moji1);
}

void renketu(char* moji1, char* moji2)
{
	int i, j;
	for (i = 0; *(moji1 + i) != '\0'; i++);
	for (j = 0; *(moji1 + i)=*(moji2+j); i++,j++);
}
