#include "main.h"
/**
 *
 *
 */

int _putidx(va_list args)
{

	long int number;
	int r_value, aux_variable, base;

	r_value = 0;
	number = va_arg(args, int);

	if (number < 0)
	{
		number *= -1;
		_putchar(45);
		r_value++;
	}
	if (number >= 0 && number <= 9)
	{
		_putchar(number + 48);
		r_value++;
	}
	if (number > 9)
	{
		base = 10;

		while (number / base > 9)
		{
			base *= 10;
		}

		while (base > 0)
		{
			aux_variable = number / base;
			number = number % base;
			_putchar(aux_variable + 48);
			base = base / 10;
			r_value++;
		}
	}
	return (r_value);
}
