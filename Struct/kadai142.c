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
	printf("コース名:");
	gets(data.course);
	printf("教科名:");
	gets(data.subject);
	printf("単位数:");
	scanf("%d", &data.unit);

	printf("コース名:%s\n", data.course);
	printf("教科名:%s\n", data.subject);
	printf("単位数:%d\n", data.unit);
	
	return(0);
}