#include <stdio.h>

int main(void)
{
	int teika;

	/*入力部分*/
	printf("定価を入力してください：");
	scanf_s("%d", &teika);

	/*表示部分*/
	printf("1割引：%d\n",int(teika * 0.9));
	printf("3割引：%d\n",int(teika * 0.7));
	printf("5割引：%d\n",int(teika * 0.5));
	printf("8割引：%d\n",int(teika * 0.2));
	
	return(0);
}