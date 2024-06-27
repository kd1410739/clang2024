#include <stdio.h>

int main(void)
{
	char s[256];

	FILE* pfn;

	if ((pfn = fopen("スケジュールファイル", "r")) == NULL)
	{
		
	}
	fprintf(pfn, "test");
	fclose(pfn);
}