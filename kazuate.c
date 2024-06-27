#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int num,ran, i;
	srand(time(0));
	rand();
	ran = rand() % 100+1;
	printf("”‚ ‚ÄƒQ[ƒ€\n");
	printf("1`100‚Ü‚Å‚Ì”‚ğ“–‚Ä‚éƒQ[ƒ€\n");
	for (num = 0, i = 1; ran != num; i++)
	{
		printf("”(1`100)‚ğ“ü—Í:");
		scanf("%d", &num);
		if (num < ran)
		{
			printf("%d‚æ‚è‘å‚«‚¢‚Å‚·\n", num);
		}
		else if (num > ran)
			{
				printf("%d‚æ‚è¬‚³‚¢‚Å‚·\n", num);
			}
			else
			{
				printf("‚ ‚½‚è%d‰ñ–Ú‚Å“–‚Ä‚Ü‚µ‚½\n", i);
			}
		}
	}
}