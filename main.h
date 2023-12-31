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
int _putchar(char c);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int printf_string(va_list val);
int printf_char(va_list val);
int printf_37(void);
int printf_int(va_list args);
int printf_dec(va_list args);
int printf_srev(va_list args);
int printf_rot13(va_list args);
int printf_bin(va_list val);
int printf_unsigned(va_list args);
int printf_oct(va_list val);
int printf_hex(va_list val);
int printf_HEX(va_list val);
int printf_exclusive_string(va_list val);
int printf_pointer(va_list val); 
int printf_hex_aux(unsigned long int num); 
int printf_HEX_aux(unsigned int num);
int rev_string(char *s); 

#endif