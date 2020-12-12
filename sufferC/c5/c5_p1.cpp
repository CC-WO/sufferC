#include <stdio.h>

int main(void)
{
	int water = 198;
	int milk = 138;

	int oazukari = 1000;
	int kaikei = 0;
	int oturi = 0;

	kaikei = (198 + (138 * 2)) * 1.05;

	oturi = 1000 - kaikei;

	printf("‚¨’Ş‚è‚Í:%d‰~\n", oturi);

	return(0);

}