#include <stdio.h>
main()
{
	int s, i;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("�T���ls�����");
	scanf("%d", &s);
	d[10] = s;
	for (i = 0; s != d[i]; i++);
	if (i == 10)
	{
		printf("���̓f�[�^%d�͌�����Ȃ�����\n", s);
	}
	else
	{
		printf("���̓f�[�^%d��%d�ԖڂɌ�������\n", s, i);
	}
}