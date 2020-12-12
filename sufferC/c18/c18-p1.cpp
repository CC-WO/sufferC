#include <stdio.h>

enum{
	OLY_NONE,		//0:�I�����s�b�N�Ȃ�
	OLY_SUMMER,		//1:�ċG�I�����s�b�N
	OLY_WINTER		//2:�~�G�I�����s�b�N
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
		printf("�������͂��Ă�������:");
		scanf_s("%d", &year);
	} while (0 > year);

	dis = olydiscrimination(year);

	switch (dis){
	case(OLY_NONE) : printf("�J�Â���Ȃ�\n"); break;
	case(OLY_SUMMER) : printf("�ċG�I�����s�b�N\n"); break;
	case(OLY_WINTER) : printf("�~�G�I�����s�b�N\n"); break;
	}

	return(0);
}