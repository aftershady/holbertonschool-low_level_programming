#include <unistd.h>
#include "main.h"
/**
*jack_bauer - countdown
*Description: countdown from 00:00 to 23:59
*Return: void
*/
void jack_bauer(void)
{
	char _10_hour = '0';
	char hour = '0';
	char _10_minutes = '0';
	char minutes = '0';
	while(_10_hour != '2' && hour != '4')
	{
		while(minutes <= '9')
		{
			_putchar(_10_hour);
			_putchar(hour);
			_putchar(':');
			_putchar(_10_minutes);
			_putchar(minutes);
			minutes++;
		}
		if (minutes > '9')
		{
			_10_minutes++;
			minutes = '0';
		}
		else if (_10_minutes > '6')
		{
			hour++;
			_10_minutes = '0';
		}
		else if (hour > '9')
		{
			_10_hour++;
			hour = '0';
		}
	}
}
