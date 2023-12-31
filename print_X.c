#include "main.h"

/**
 * converter_X - converts a unsigned int number
 * into hexadecimal (uppercase) notation.
 * @i: number to convert.
 */
void converter_X(int i)
{
	if (i < 10)
		_putchar(i + '0');
	if (i == 10)
		_putchar('A');
	if (i == 11)
		_putchar('B');
	if (i == 12)
		_putchar('C');
	if (i == 13)
		_putchar('D');
	if (i == 14)
		_putchar('E');
	if (i == 15)
		_putchar('F');
}

/**
 * print_X - prints a unsigned int number in hexadecimal (uppercase) notation.
 * @args: number to print.
 * Return: number of digits printed.
 */
int print_X(va_list args)
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
		converter_X(tab[i]);

	return (r_value);
}
