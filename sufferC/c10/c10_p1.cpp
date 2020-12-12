#include <stdio.h>

int main(void)
{
	int score = 0;

	do{
		printf("点数を入力してください:");
		scanf_s("%d", &score);
		if (score < 0 || score>100)	printf("0点~100点の間で入力してください。\n");
	} while (score < 0 || score>100);
	
	printf("あなたの点数は%d\n", score);

	return(0);
}