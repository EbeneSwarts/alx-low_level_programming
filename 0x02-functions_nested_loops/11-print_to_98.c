#include <stdio.h>
#include "main.h"
#include "_putchar.c"

/**
 * print_to_98 - Check Main
 * @n: A input integer
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line.
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			_putchar("%d", \n);

			if (n == 98)
				continue;
			_putchar(", ");
		}
		_putchar("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			_putchar("%d", n);

			if (n == 98)
				continue;
			_putchar(", ");
		}
		_putchar("\n");
	}
}
