#include <stdio.h>

int main(void)
{
	int year;

	/*���͕���*/
	printf("�������͂��Ă��������F");
	scanf_s("%d", &year);

	/*�\������*/
	if ((year % 4) == 0)	
		printf("���̔N�͉ċG�I�����s�b�N���J�Â���܂��B\n");
	if ((year % 4) == 2 && (year % 4) != 0)	
		printf("���̔N�͓~�G�I�����s�b�N���J�Â���܂��B\n");
	if ((year % 4) == 1 || (year % 4) == 3)	
		printf("���̔N�̓I�����s�b�N�͊J�Â���܂���B\n");

	return(0);
}