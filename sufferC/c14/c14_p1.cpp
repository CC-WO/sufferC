#include <stdio.h>
#include <string.h>

int main(void)
{
	char fstr[256];
	char lstr[256];

	printf("��ڂ̕��������͂��Ă�������:");
	scanf_s("%s", fstr, 256);
	printf("��ڂ̕��������͂��Ă�������:");
	scanf_s("%s", lstr, 256);

	strcat_s(fstr, lstr);

	printf("�������ꂽ�������%s\n", fstr);

	return(0);
}