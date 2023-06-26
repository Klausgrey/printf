#include "main.h"

/**
 * _putstr - prints a string
 * str: pointer to the string
 * Return: the total number of character it prints
 */

int _putstr(va_list args)
{
	int index;
	char *str = va_arg(args, char *);

	if(str == NULL)
		str = ("(null)");
	else
	{
		for(index = 0; str[index] != '\0'; index++)
		{
			_putchar(str[index]);
		}
	}
	return(index);
}
