#include <stdio.h>
main()
{
	int i,num;
	num = 0;
	i = 1;
	for (i=1; i <= 10; i += 1) {
		num += i;
		printf("1‚©‚ç%d‚Ü‚Å‚Ì˜a=%d\n",i,num);
	}
}