#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, from 00:00 to 23:59
 *
 * Description: This function prints each minute in the format HH:MM, 
 * starting at 00:00 and ending at 23:59. Hours and minutes are always
 * printed with two digits, using _putchar for all output.
 *
 * Return: void
 */
void jack_bauer(void n)

int hour;
int minute;
{
	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');

			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar('\n');
		}
	}
}
