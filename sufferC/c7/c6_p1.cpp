#include <stdio.h>

int main(void)
{
	int teika;

	/*���͕���*/
	printf("�艿����͂��Ă��������F");
	scanf_s("%d", &teika);

	/*�\������*/
	printf("1�����F%d\n",int(teika * 0.9));
	printf("3�����F%d\n",int(teika * 0.7));
	printf("5�����F%d\n",int(teika * 0.5));
	printf("8�����F%d\n",int(teika * 0.2));
	
	return(0);
}