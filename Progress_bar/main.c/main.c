#include <stdlib.h>
#include <stdio.h>
//#include "color.h"
#include <Windows.h>

int main()
{
	char str[102] = { '\0' };
	char buff[5] = "|/-\\";
	int i = 0;
	while (i <= 100)
	{
		/*int c = i % 5;
		switch (c)
		{
		case 0:
			printf(RED);
			break;
		case 1:
			printf(BLUE);
			break;
		case 2:
			printf(GREEN);
			break;
		case 3:
			printf(BROWN);
			break;
		case 4:
			printf(YELLOW);
			break;
		}*/
		printf("[%-100s][%%%d][%c]\r", str, i, buff[i % 4]);
		fflush(stdout);
		str[i++] = '#';
		Sleep(10);
	}
	//printf("\033[0m");
	return 0;
}