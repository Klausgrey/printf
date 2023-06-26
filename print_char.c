#include "main.h"
/**
 * print_c - prints a char.
 * @args: char to print.
 * Return: always 1 (number of chars printed).
 */
int print_c(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
