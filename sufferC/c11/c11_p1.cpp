#include <stdio.h>

void checkyear(int);

int main(void)
{
	int year;

	printf("�������͂��Ă��������F");
	scanf_s("%d", &year);

	checkyear(year);
	
	return(0);
}

void checkyear(int year)
{
	switch (year % 4){
	case 0:{printf("�ċG�I�����s�b�N\n"); break; }
	case 1:{printf("�I�����s�b�N�Ȃ�\n"); break; }
	case 2:{printf("�~�G�I�����s�b�N\n"); break; }
	case 3:{printf("�I�����s�b�N�Ȃ�\n"); break; }
	}

	return;
}