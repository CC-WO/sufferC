#include <stdio.h>

int main(void)
{
	FILE *fp;
	errno_t err;
	long int buf[] = { 10, 100, 1000, 1000 };

	if (err = fopen_s(&fp, "test1.dat", "wb") != 0)
		printf("ファイルをオープンできません。\n");
	else{
		fwrite(buf, sizeof(buf), 1, fp);
		fclose(fp);
	}
	return(0);
}