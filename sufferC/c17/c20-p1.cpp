#include "c20-p1.h"

void indata(personal *data)
{
	printf("名前:");	scanf_s("%s", data->name, 64);
	printf("年齢:");	scanf_s("%d", &data->age);
	printf("性別(1:男,2:女):");	scanf_s("%d", &data->sex);

	return;
}

void printfdata(personal data)
{
	printf("名前:%s\n", data.name);
	printf("年齢:%d\n", data.age);
	if (data.sex == 1) printf("性別:男性\n");
	if (data.sex == 2) printf("性別:女性\n");

	return;
}