#include <stdio.h>

struct school
{
	char course[256];
	char subject[256];
	int unit;
};

int main(void)
{
	struct school data;
	printf("�R�[�X��:");
	gets(data.course);
	printf("���Ȗ�:");
	gets(data.subject);
	printf("�P�ʐ�:");
	scanf("%d", &data.unit);

	printf("�R�[�X��:%s\n", data.course);
	printf("���Ȗ�:%s\n", data.subject);
	printf("�P�ʐ�:%d\n", data.unit);
	
	return(0);
}