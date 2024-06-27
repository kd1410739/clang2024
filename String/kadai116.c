#include <stdio.h>
main()
{
	char a[100], b[100];
	int i,j;
	printf("•¶Žš—ñ1?");
	scanf("%s", &a[0]);
	printf("•¶Žš—ñ2?");
	scanf("%s", &b[0]);

	for (i = 0; a[i] != '\0'; i++);
	for (j = 0; b[j] != '\0'; j++,i++)
	{
		a[i] = b[j];
	}
	a[i] = '\0';
	printf("%s", &a[0]);
}