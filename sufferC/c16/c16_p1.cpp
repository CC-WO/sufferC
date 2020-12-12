#include <stdio.h>
#include <string.h>

typedef struct{
	char Name[64];
	int old;
	int sex;
}personal;

void indata(personal *data)
{
	printf("名前:");	scanf_s("%s", data->Name, 64);
	printf("年齢:");	scanf_s("%d", &data->old);
	printf("性別(1:男,2:女):");	scanf_s("%d", &data->sex);

	return;
}

void printfdata(personal data)
{
	printf("名前:%s\n", data.Name);
	printf("年齢:%d\n", data.old);
	if (data.sex == 1) printf("性別:男性\n");
	if (data.sex == 2) printf("性別:女性\n");

	return;
}

int main(void)
{
	int i;
	personal data[3] = { 0 };

	for (i = 0; i < 3;i++){
		printf("%d人目の情報の入力。\n", i + 1);
		indata(&data[i]);
	}

	for (i = 0; i < 3; i++){
		printf("%d人目の情報の出力。\n", i + 1);
		printfdata(data[i]);
	}
	
	return(0);

}