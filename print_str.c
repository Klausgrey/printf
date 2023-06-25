#include "main.h"

/**
 * print_str - prints a string
 * str: pointer to the string
 * Return: the total number of character it prints
 */

int _putstr(char *str)
{
	int index, r_value = 0;

	if(str)
	{
		for(index = 0; str[index] != '\0'; index++)
		{
			print_out(str[index]);
			r_value += 1;
		}
	}
	return(r_value);
}
