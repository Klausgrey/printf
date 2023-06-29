#include "main.h"

/**
* _putbi - prints binary
* @args: argumnets passed
* Return: character printed
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
    i--;
    for (; i >= 0; i--)
    _putchar(tab[i] + 45);
    r_value++;

return (r_value);


}
/**
 * print_int - auxiliar function for prints an unsigned int number.
 * @num: number to print.
 * Return: always 0 (success).
 */
int print_int(unsigned int num)
{
	if (num / 10 != 0)
		print_int(num / 10);
	_putchar('0' + (num % 10));

	return (0);
}


/**
 * print_u - prints a unsigned int number.
 * @args: number to print.
 * Return: number of digits printed.
 */
int print_u(va_list args)
{
    unsigned int num = va_arg(args, int);
	int r_value= 1;

	print_int(num);
	if (num == 4294967295)
		return (10);

	while (num / 10 != 0)
	{
		r_value++;
		num = num / 10;
	}

	return (r_value);
}
