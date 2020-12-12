#include <stdio.h>

int main(void)
{
	FILE *fp;
	errno_t err;
	char str[100] = { 0 };

	if (err = fopen_s(&fp, "test.txt", "w") != 0)
		printf("ファイルをオープンできません。\n");
	else{
		fprintf(fp, "Hello,World!!\n");
		fclose(fp);
	}

	if (err = fopen_s(&fp, "test.txt", "r") != 0)
		printf("ファイルをオープンできません。\n");
	else{
		fscanf_s(fp, "%s", str, 100);
		fclose(fp);
	}

	if (err = fopen_s(&fp, "test.txt", "a") != 0)
		printf("ファイルをオープンできません。\n");
	else{
		fprintf(fp, "%s\n", str);
		fclose(fp);
	}

	return(0);
}