#include <stdio.h>

int main(void)
{
	int year;

	/*入力部分*/
	printf("西暦を入力してください：");
	scanf_s("%d", &year);

	/*表示部分*/
	if ((year % 4) == 0)	
		printf("その年は夏季オリンピックが開催されます。\n");
	if ((year % 4) == 2 && (year % 4) != 0)	
		printf("その年は冬季オリンピックが開催されます。\n");
	if ((year % 4) == 1 || (year % 4) == 3)	
		printf("その年はオリンピックは開催されません。\n");

	return(0);
}