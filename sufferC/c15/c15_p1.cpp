#include <stdio.h>

void minmax(int *max, int *min, int *ma)
{
	int i = 0;

	*max = 0;
	*min = 100;

	while (ma[i] != -1){
		*max = (ma[i] > *max) ? ma[i] : *max;
		*min = (ma[i] < *min) ? ma[i] : *min;
		i++;
	}

}

int main(void)
{
	int array[10];
	int i;
	int min, max;

	printf("整数値を入力してください。(0~100)\n");
	i = 0;
	do{
		printf("%d番目の数:", i + 1);
		scanf_s("%d", &array[i]);
		i++;
	} while (array[i - 1] != -1);

	minmax(&max,&min,array);

	printf("最大値は%d\n", max);
	printf("最小値は%d\n", min);

	return(0);

}