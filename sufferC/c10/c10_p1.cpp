#include <stdio.h>

int main(void)
{
	int score = 0;

	do{
		printf("�_������͂��Ă�������:");
		scanf_s("%d", &score);
		if (score < 0 || score>100)	printf("0�_~100�_�̊Ԃœ��͂��Ă��������B\n");
	} while (score < 0 || score>100);
	
	printf("���Ȃ��̓_����%d\n", score);

	return(0);
}