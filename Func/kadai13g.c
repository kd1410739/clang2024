#include <stdio.h>
#include <string.h>
main(int argc, char* argv[])
{
	int i;
	if (argc == 2)
	{
		if (strcmp(argv[1],  "H")==0)
		{
			for (i = 65; i < 70; i++)
			{
				printf("%c---0X%x ", i, i);
			}
		}
		else if (strcmp(argv[1], "D") == 0)
		{
			for (i = 65; i < 70; i++)
			{
				printf("%c---%o ", i, i);
			}
		}
		else
		{
			printf("エラーメッセージ\n");
		}
	}
	else if(argc == 1)
	{
		for (i = 65; i < 70; i++)
		{
			printf("%c---%d ", i, i);
		}
	}
	else
	{
		printf("エラー");
	}
}