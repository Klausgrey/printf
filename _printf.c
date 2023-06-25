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
    va_list args;
    char *str_h;

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
                if (str_h == NULL)
                {
                    print_out("(Null)");
                    r_value++;
                }
                else
                {
                    while (*str_h)
                    {
                        print_str(*str_h);
                        str_h++;
                        r_value++;
                    }
                }
                i++;
            }
            else if (format[i + 1] == '%')
            {
                print_out('%');
                i++;
                r_value++;
            }
            else
            {
                print_out('%');
                print_out(format[i + 1]);
                i++;
                r_value += 2;
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

