#include "main.h"

int (*get_func(char flag))(va_list);

/**
 * _printf - replica of the printf function
 * @format: parameter
 * Return: number of args passed
 */

int _printf(const char *format, ...)
{
	int i;
	int r_value = 0;
	va_list args;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);
	for (i = 0;  format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			r_value++;
		}
		else if (format[i + 1] == '\0')
			return (-1);
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			r_value++;
			i++;
		}
		else if (get_func(format[i + 1]) != NULL)
		{
			r_value += get_func(format[i + 1])(args);
			i++;
		}
		else
		{
			_putchar(format[i]);
			r_value++;
		}
	}
	va_end(args);
	return (r_value);
}

/**
 * get_func - auxiliar function for print with a specific format.
 * @flag: format specifier
 * Return: pointer to format function or NULL.
 */

int (*get_func(char flag))(va_list)
{
	printer_t arr[] = {
		{'c', print_c},
		{'s', _putstr},
		{'i', _putidx},
		{'d', _putidx},
		{'b', _putbi},
		{'u', print_uni},
		{'o', print_oct},
		{'x', print_x},
		{'X', print_X},
		{'r', print_r},
		{'R', print_R}
		{'\0', NULL}
	};
	int i;

	for (i = 0; arr[i].flag != '\0'; i++)
		if (flag == arr[i].flag)
			break;
	return (arr[i].function);
}
