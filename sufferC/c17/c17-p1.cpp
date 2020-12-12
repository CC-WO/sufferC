#include <stdio.h>

enum{ NOBITA = 1, SIZUKA, TAKESHI, SUNEO };

int main(void)
{
	FILE *fp;
	errno_t err;

	char str1[] = "野比のび太";
	char str2[] = "源静香";
	char str3[] = "剛田武";
	char str4[] = "骨川スネ夫";
	
	int ave[] = { 0, 90, 40, 70 };

	if (err = fopen_s(&fp, "p1.csv", "w") != 0)
		printf("ファイルをオープンできません。\n");
	else{
		fprintf(fp, "%d,%s,%d\n", NOBITA, str1, ave[0]);
		fprintf(fp, "%d,%s,%d\n", SIZUKA, str2, ave[1]);
		fprintf(fp, "%d,%s,%d\n", TAKESHI, str3, ave[2]);
		fprintf(fp, "%d,%s,%d\n", SUNEO, str4, ave[3]);

		fclose(fp);
	}

	return(0);

}