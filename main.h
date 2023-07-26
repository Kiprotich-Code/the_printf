#ifndef MAIN_H
#define MAIN_H
 
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
* struct format - match conversion specifiers for printf
* @id: type char pointer of the specifier  
* @f: type pointer to function for the conversion specifier
*
*/
typedef struct format 
{
    char *id;
    int (*f)();
} conv_match;

int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);

#endif