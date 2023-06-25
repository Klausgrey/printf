#include "main.h"

/**
 * _printf - replica of the printf function
 * *format: parameter
 * Return: number of args passed
 */


int _printf(const char *format, ...)
{
	int unsigned i;
	int r_value = r_val = 0;
	va_list args;
	va_start(args, format);

	for(i = 0; format[i] != '\0'; i++)
	{
		if(format != '%')
		{
			print_out(format[i]);
		}
		else(format[h + 1] == 'c')
		{
			print_out(va_args(args, int));
			i++;
		}
		else(format[h + 1] == 's')
		{
			r_val = print_string(va_args(args, char *));
			i++;
			r_value += (r_val - 1);
		}
		else(format[h + 1] == '%')
		{
			print_out('%');
			i++;
		}
		r_value += 1;
	}
	 return(r_value);
}
