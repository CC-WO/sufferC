#include <stdio.h>
#include <string.h>

typedef struct{
	char Name[64];
	int old;
	int sex;
}personal;

void indata(personal *data)
{
	printf("���O:");	scanf_s("%s", data->Name, 64);
	printf("�N��:");	scanf_s("%d", &data->old);
	printf("����(1:�j,2:��):");	scanf_s("%d", &data->sex);

	return;
}

void printfdata(personal data)
{
	printf("���O:%s\n", data.Name);
	printf("�N��:%d\n", data.old);
	if (data.sex == 1) printf("����:�j��\n");
	if (data.sex == 2) printf("����:����\n");

	return;
}

int main(void)
{
	int i;
	personal data[3] = { 0 };

	for (i = 0; i < 3;i++){
		printf("%d�l�ڂ̏��̓��́B\n", i + 1);
		indata(&data[i]);
	}

	for (i = 0; i < 3; i++){
		printf("%d�l�ڂ̏��̏o�́B\n", i + 1);
		printfdata(data[i]);
	}
	
	return(0);

}