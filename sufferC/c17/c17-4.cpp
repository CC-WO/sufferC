#include <stdio.h>

int main(void)
{
	FILE *fp;
	errno_t err;
	int buf;

	if (err = fopen_s(&fp, "test.dat", "rb") != 0)
		printf("ファイルをオープンできません。\n");
	else{
		fread(&buf, sizeof(buf), 1, fp);
		fclose(fp);
	}

	printf("%d\n", buf);

	return(0);
}