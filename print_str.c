#include "main.h"

/**
 * _putstr - prints a string
 * str: pointer to the string
 * Return: the total number of character it prints
 */

int _putstr(va_list args)
{
	int index = 0;
	char *str = va_arg(args, char *);

	if(str == NULL)
		str = "(null)";

	for(; str[index]; index++)
		_putchar(str[index]);

	return(index);
}

