#include <stdio.h>

int main(void)
{
	FILE *fp;
	errno_t err;
	int buf = 100;

	if (err = fopen_s(&fp, "test.dat", "wb") != 0)
		printf("�t�@�C�����I�[�v���ł��܂���ł����B\n");
	else{
		fwrite(&buf, sizeof(buf), 1, fp);
		fclose(fp);
	}
	return(0);
}