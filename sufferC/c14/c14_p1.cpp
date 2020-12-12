#include <stdio.h>
#include <string.h>

int main(void)
{
	char fstr[256];
	char lstr[256];

	printf("ˆê‚Â–Ú‚Ì•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf_s("%s", fstr, 256);
	printf("“ñ‚Â–Ú‚Ì•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf_s("%s", lstr, 256);

	strcat_s(fstr, lstr);

	printf("Œ‹‡‚³‚ê‚½•¶š—ñ‚Í%s\n", fstr);

	return(0);
}