#include <unistd.h>
#include "main.h"
/**
*jack_bauer - countdown
*Description: countdown from 00:00 to 23:59
*Return: void
*/
void jack_bauer(void)
{
	int _10_hour = 0;
	int hour = 0;
	int _10_minutes = 0;
	int minutes = 0;
	while(10_hour != 2 && hour != 4)
	{
		while(minutes <= 9)
		{
			putchar(_10_hour);
			putchar(hour);
			putchar(':');
			putchar(_10_minutes);
			putchar(minutes);
			minutes++;
		}
		if (minutes > 9)
		{
			_10_minutes++;
			minutes = 0;
		}
		else if (_10_minutes > 6)
		{
			hour++;
			_10_minutes = 0;
		}
		else if (hour > 9)
		{
			_10_hour++;
			hour = 0;
		}
	}

