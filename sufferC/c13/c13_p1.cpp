#include <stdio.h>

int main(void)
{
	int array[10];
	int i;

	printf("•Ï”‚ğ10ŒÂ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");

	for (i = 0; i < 10; i++){
		printf("array[%d]=", i);
		scanf_s("%d", &array[i]);
	}

	for (i = 10 - 1; i >= 0; i--)
		printf("array[%d]=%d\n",i, array[i]);

	return(0);

}