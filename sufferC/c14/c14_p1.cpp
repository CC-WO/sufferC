#include <stdio.h>
#include <string.h>

int main(void)
{
	char fstr[256];
	char lstr[256];

	printf("一つ目の文字列を入力してください:");
	scanf_s("%s", fstr, 256);
	printf("二つ目の文字列を入力してください:");
	scanf_s("%s", lstr, 256);

	strcat_s(fstr, lstr);

	printf("結合された文字列は%s\n", fstr);

	return(0);
}