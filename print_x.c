#include "main.h"

/**
 * converter_x - converts a unsigned int number
 * into hexadecimal (lowercase) notation.
 * @i: number to convert.
 */
void converter_x(int i)
{
	if (i < 10)
		_putchar(i + '0');
	if (i == 10)
		_putchar('a');
	if (i == 11)
		_putchar('b');
	if (i == 12)
		_putchar('c');
	if (i == 13)
		_putchar('d');
	if (i == 14)
		_putchar('e');
	if (i == 15)
		_putchar('f');
}
