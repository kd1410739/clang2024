#include <stdio.h>
#include <string.h>
#define CNT 3

int NUM = CNT;

struct animal
{
	int no;
	char name[20];
	char color[10];
};

void display(struct animal *pdata);
void add(struct animal *pdata);
void search(struct animal *pdata);

int main(void)
{
	char judge[10];
	int i;
	struct animal data[50] = { {30,"dog","white"},{50,"tiger","yellow"},{60,"horse","brown"} };
	struct animal* pdata = data;
	//処理メニュー
	while (1)
	{
		printf("処理メニュー(Xの入力で終了します)\n");
		printf("1:データ表示	2:データ追加	3:データ検索	処理は?:");
		scanf("%s", judge);
		if (strcmp(judge, "1") == 0)
		{
			display(pdata);
		}
		else if (strcmp(judge, "2") == 0)
		{
			add(pdata);
		}
		else if (strcmp(judge, "3") == 0)
		{
			search(pdata);
		}
		else if (strcmp(judge, "X") == 0)
		{
			break;
		}
		else
		{
			printf("入力エラー\n入力はX又は1～3にしてください\n");
		}
	}
	
	return(0);
}
//表示処理
void display(struct animal *pdata)
{
	int i;
	for (i = 0; i < NUM; i++)
	{
		printf("番号:%d\t\t", (pdata+i)->no);
		printf("名前:%s\t", (pdata + i)->name);
		printf("色:%s\n", (pdata + i)->color);
	}
	return;
}
//追加処理
void add(struct animal *pdata)
{
	int i;
	for (i = 0; i < NUM; i++,pdata++);
	printf("データの追加を行うので入力してください\n");
	printf("番号>");
	scanf("%d",&pdata->no);
	printf("名前>");
	scanf("%s",&pdata->name);
	printf("色>");
	scanf("%s",&pdata->color);

	NUM++;
	return;
}
//検索処理
void search(struct animal *pdata)
{
	int i,num,no;
	char name[256], color[256];
	printf("登録されているデータの検索を行います\n");
	printf("検索項目(1:番号 2:名前 3:色)>");
	scanf("%d", &num);
	switch (num)
	{
	case 1:printf("検索する番号>");
		scanf("%d", &no);
		printf("検索結果\n");
		for (i = 0; i < NUM; i++)
		{
			if (no == (pdata + i)->no)
			{
				printf("番号:%d\t名前:%s\t色:%s\n", pdata->no, pdata->name, pdata->color);
			}
		}
		break;
	case 2:printf("検索する名前>");
		scanf("%s", &name);
		printf("検索結果\n");
		for (i = 0; i < NUM; i++, pdata++)
		{
			if (strcmp(name,  (pdata + i) ->name) == 0)
			{
				printf("番号:%d\t名前:%s\t色:%s\n", pdata->no, pdata->name, pdata->color);
			}
		}
		break;
	case 3:printf("検索する色>");
		scanf("%s", &color);
		printf("検索結果\n");
		for (i = 0; i < NUM; i++,pdata++)
		{
			if (strcmp(color, (pdata + i) ->color) == 0)
			{
				printf("番号:%d\t名前:%s\t色:%s\n", pdata->no, pdata->name, pdata->color);
			}
		}
		break;
	default:printf("エラー\n1～3を入力してください\n");
	}

	return;
}