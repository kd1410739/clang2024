#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int un,i;
	i = 0;
	srand(time(0));
	rand();
	un = rand() % 5 + 1;
	printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í");
	while (i < un)
	{
		printf("™");
		i++;
	}
	printf("‚Å‚·\n");
}