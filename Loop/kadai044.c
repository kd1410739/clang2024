#include <stdio.h>
main()
{
	int num;
	printf("����(-999�œ��͏I��)?");
	scanf("%d", &num);
	while (num != -999)
	{
		printf("8�i��=%o\t16�i��=%X\n", num, num);
		printf("����(-999�œ��͏I��)?");
		scanf("%d", &num);

	}
}