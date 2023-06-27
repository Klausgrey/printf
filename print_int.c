#include "main.h"
int _putidx(va_list args);

/**
 * print_int - A function that prints the integer values
 * @num: the integer value passed.
 * Return: 0 if successful.
 */

int print_int(long int num)
{
	int n = 0;
	if (num != 0)
	{
		n = num % 10;
		print_int(n / 10);
		_putchar(num + '0');
	}
	return (0);
}
/**
 * _putidx - main funtion that prints an interger value.
 * @args: number of arguments passed.
 * Return: number of characters printed
 */

int _putidx(va_list args)
{
	int n = va_arg(args, int);

	int r_value = 1;
	long int num;

	if (n < 0)
	{
		_putchar('-');
	num = -n;
	print_int(num);
	r_value++;
	}
	else
	{
		num = n;
	print_int(num);
	r_value++;
	}
	while (num / 10 != 0)
	{
		r_value++;
		num = num / 10;
	}
	return (r_value);
}
