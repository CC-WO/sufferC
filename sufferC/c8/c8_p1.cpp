#include <stdio.h>

int main(void)
{
	int month;

	/*“ü—Í•”•ª*/
	printf("Œ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf_s("%d", &month);

	/*•\¦•”•ª*/
	switch (month){
		case 1:		{printf("–rŒ\n");		break; }
		case 2:		{printf("”@Œ\n");		break; }
		case 3:		{printf("–í¶\n");		break; }
		case 4:		{printf("‰KŒ\n");		break; }
		case 5:		{printf("HŒ\n");		break; }
		case 6:		{printf("…–³Œ\n");	break; }
		case 7:		{printf("•¶Œ\n");		break; }
		case 8:		{printf("—tŒ\n");		break; }
		case 9:		{printf("’·Œ\n");		break; }
		case 10:	{printf("_–³Œ\n");	break; }
		case 11:	{printf("‘šŒ\n");		break; }
		case 12:	{printf("t‘–\n");		break; }
		default:	{printf("‚»‚ÌŒ‚Í‚ ‚è‚Ü‚¹‚ñB\n"); break; }
	}

	return(0);
}