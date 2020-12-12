#include  <stdio.h>
#include  <stdlib.h>

typedef struct{
	char NAME[64];
	int old;
	int sex;
}people;

void Inputpeople(people *data)
{
	printf("���O:");	scanf_s("%s", data->NAME, 64);
	printf("�N��:");	scanf_s("%d", data->old);
	printf("����(0:�j��,1:����):");	scanf_s("%d", data->sex);
	putchar('\n');
}

void Showpeople(people data)
{
	printf("%s\n", data.NAME);
	printf("%d\n", data.old);
	switch (data.sex){
	case(0) : printf("�j��\n"); break;
	case(1) : printf("����\n"); break;
	}
}

int main(void)
{
	int i;
	int count;
	int datasize;

	people *data;

	datasize = 10;

	data = (people*)malloc(sizeof(int) * 10);

	count = 0;

	while (1){
		Inputpeople(&data[count]);
		if (data[count].old == -1)	break;
		count++;

		if (count >= datasize){
			datasize += 10;
			data = (people*)realloc(data, sizeof(people)*datasize);
		}
	}

	for (i = 0; i < count; i++){
		Showpeople(data[i]);
	}

	free(data);

	return(0);
}