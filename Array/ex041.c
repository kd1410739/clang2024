#include <stdio.h>
main()
{
	float box[3], sum;
	int i;
	sum = 0;
	for (i = 0; i < 3; i++)
	{
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	printf("‡Œv‚Í%.2f‚Å‚·\n•½‹Ï‚Í%.2f‚Å‚·\n",sum, sum / 3);
}