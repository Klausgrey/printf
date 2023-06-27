#ifndef MAIN_H
#define MAIN_H

/** C library functions used **/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/** STRUCTURE **/

/**
 * struct printer - conects format specifier with its corresponding function.
 * @flag: format specifier.
 * @function: pointer to @flag especific function.
 */

typedef struct printer
{
	char flag;
	int (*function)(va_list);
} printer_t;

/** PROTOTYPES **/
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list args);
int _putstr(va_list args);
int _putidx(va_list args);
/**int _putidx(va_list args);**/
/**int _putbi(va_list args);**/
/**int print_u(va_list args);**/
/**int print_o(va_list args);**/
/**int print_x(va_list args);**/
/**int print_X(va_list args);**/
/**int print_r(va_list args);**/
/**int print_R(va_list args);**/

#endif /* END OF HEADER FILE */
