#include <stdio.h>

void checkyear(int);

int main(void)
{
	int year;

	printf("西暦を入力してください：");
	scanf_s("%d", &year);

	checkyear(year);
	
	return(0);
}

void checkyear(int year)
{
	switch (year % 4){
	case 0:{printf("夏季オリンピック\n"); break; }
	case 1:{printf("オリンピックなし\n"); break; }
	case 2:{printf("冬季オリンピック\n"); break; }
	case 3:{printf("オリンピックなし\n"); break; }
	}

	return;
}