#include "c20-p1.h"

void indata(personal *data)
{
	printf("���O:");	scanf_s("%s", data->name, 64);
	printf("�N��:");	scanf_s("%d", &data->age);
	printf("����(1:�j,2:��):");	scanf_s("%d", &data->sex);

	return;
}

void printfdata(personal data)
{
	printf("���O:%s\n", data.name);
	printf("�N��:%d\n", data.age);
	if (data.sex == 1) printf("����:�j��\n");
	if (data.sex == 2) printf("����:����\n");

	return;
}