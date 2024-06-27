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
	strcpy(data.course, "ゲームソフトIコース");
	strcpy(data.subject, "C言語");
	data.unit = 8;

	printf("コース名:%s\n", data.course);
	printf("教科名:%s\n", data.subject);
	printf("単位数:%d\n", data.unit);

	return(0);
}