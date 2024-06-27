#include <stdio.h>
main()
{
	char m[100];
	int i;
	printf("•¶š—ñ‚Í?");
	scanf("%s", &m[0]);
	for (i = 1; m[i] != '\0'; i++);
	printf("•¶š—ñ:%s\t•¶š”=%d•¶š\n", &m[0],i);

}