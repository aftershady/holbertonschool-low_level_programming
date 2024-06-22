#include <unistd.h>
#include "main.h"
/**
*jack_bauer - countdown
*Description: countdown from 00:00 to 23:59
*Return: void
*/
void jack_bauer(void)
{
	int hour = 0;
	int minutes = 0;
	int 10_seconds = 0;
	int seconds = 0:
	while(hour<24)
	{
		putchar(hour);
		putchar(minutes);
		putchar(10_seconds);
		while(seconds <= 9)
		{
			putchar(seconds);
			seconds++;
		}
		if (seconds == 10 && minutes !=6)
		{
			minutes++;

