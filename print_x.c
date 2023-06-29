#include "main.h"

/**
 * converter_x - converts a unsigned int number
 * into hexadecimal (lowercase).
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


/**
 * print_x - prints a unsigned int number in hexadecimal (lowercase).
 * @args: number to print.
 * Return: number of digits printed.
 */
int print_x(va_list args)
{
	int r_value = 1, i = 0, tab[8];
	unsigned int num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (r_value);
	}

	while (num != 0)
	{
		tab[i] = (num % 16);
		num = num / 16;
		i++;
	}
	r_value = i;
	i--;

	for (; i >= 0; i--)
		converter_x(tab[i]);

	return (r_value);
}
