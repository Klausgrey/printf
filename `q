#include "main.h"

/**
 * _printf - replica of the printf function
 * *format: parameter
 * Return: number of args passed
 */

int _printf(const char *format, ...)
{
    unsigned int i;
    int r_value = 0;
    int r_val = 0;
    va_list args;

    va_start(args, format);
    if (format)
    {
        for (i = 0; format[i] != '\0'; i++)
        {
            if (format[i] != '%')
            {
                print_out(format[i]);
                r_value++;
            }
            else if (format[i + 1] == 'c')
            {
                print_out(va_arg(args, int));
                i++;
                r_value++;
            }
            else if (format[i + 1] == 's')
            {
                str_h = va_arg(args, char *);
		if(str_h == NULL)
		{
			print_out(NULL);
			r_value++;
		}
		else
		{
			print_out(str_h);
			r_value++;
		}
                i++;

            }
            else if (format[i + 1] == '%')
            {
                print_out('%');
                i++;
                r_value++;
            }
        }
    }
    else
    {
        va_end(args);
        return (-1);
    }
    va_end(args);
    return (r_value);
}

