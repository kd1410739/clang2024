#include <stdio.h>

int main(void)
{
	char s[256];

	FILE* pfn;

	if ((pfn = fopen("�X�P�W���[���t�@�C��", "r")) == NULL)
	{
		
	}
	fprintf(pfn, "test");
	fclose(pfn);
}