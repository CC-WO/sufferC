#include <stdio.h>

enum{
	OLY_NONE,		//0:オリンピックなし
	OLY_SUMMER,		//1:夏季オリンピック
	OLY_WINTER		//2:冬季オリンピック
};

int olydiscrimination(int year)
{
	if ((year % 2) == 0){
		if ((year % 4) == 0)	return(OLY_SUMMER);
		else return(OLY_WINTER);
	}
	else return(OLY_NONE);
}

int main(void)
{
	int year;
	int dis = 0;

	do{
		printf("西暦を入力してください:");
		scanf_s("%d", &year);
	} while (0 > year);

	dis = olydiscrimination(year);

	switch (dis){
	case(OLY_NONE) : printf("開催されない\n"); break;
	case(OLY_SUMMER) : printf("夏季オリンピック\n"); break;
	case(OLY_WINTER) : printf("冬季オリンピック\n"); break;
	}

	return(0);
}