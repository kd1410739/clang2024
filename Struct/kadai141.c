#include <stdio.h>
#include <string.h>

struct school
{
	char course[256];
	char subject[256];
	int unit;
};

int main(void)
{
	struct school data;
	strcpy(data.course, "�Q�[���\�t�gI�R�[�X");
	strcpy(data.subject, "C����");
	data.unit = 8;

	printf("�R�[�X��:%s\n", data.course);
	printf("���Ȗ�:%s\n", data.subject);
	printf("�P�ʐ�:%d\n", data.unit);

	return(0);
}