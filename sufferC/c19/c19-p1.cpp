#include  <stdio.h>
#include  <stdlib.h>

typedef struct{
	char NAME[64];
	int old;
	int sex;
}people;

void Inputpeople(people *data)
{
	printf("名前:");	scanf_s("%s", data->NAME, 64);
	printf("年齢:");	scanf_s("%d", data->old);
	printf("性別(0:男性,1:女性):");	scanf_s("%d", data->sex);
	putchar('\n');
}

void Showpeople(people data)
{
	printf("%s\n", data.NAME);
	printf("%d\n", data.old);
	switch (data.sex){
	case(0) : printf("男性\n"); break;
	case(1) : printf("女性\n"); break;
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