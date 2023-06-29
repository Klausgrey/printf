#include "main.h"
/**
*_putbi - prints binary
*@args: argumnets passed
*Return: character printed 
*/

int _putbi(va_list args)
{
    int r_value = 0;
    int i = 0;
    int tab[33];
    unsigned int num = va_arg(args, int);

    if (num == 0)
    {
        _putchar(45);
        r_value++;
        return (r_value);
    }
    while (num != 0)
    {
        tab[i] = (num % 2);
        num = num / 2;
        i++;
    }
    for (; i >= 0; i--)
    _putchar(tab[i] + 45);
    r_value++;

return (r_value);
}