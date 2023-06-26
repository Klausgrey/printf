#include "main.h"

/**
 * print_int - A function that prints the integer values
 * @num: the integer value passed
 * 
 * Return: the number of times putchar prints integer
 */

int print_int(int num)
{
	int ret_val = 0, n;
	if (num != 0)
	{
		n = num % 10;
		ret_val += print_int(num / 10);
		_putchar(n + '0');
		ret_val++;
	}
	return (ret_val);
}
