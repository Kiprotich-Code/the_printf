#include "main.h"

/**
* _printf - selects the correct function to print
* @format: the identifier we're looking for
* Return: the length of the string
*/

int _printf(const char * const format, ...)
{
    conv_match m[] = {
        {"%s", printf_string}, {"%c", printf_char}
    };

    va_list args;
    int i, j, len;
    i = 0;
    len = 0;

    va_start(args, format);
    if (format == NULL || (format[0] == "%" && format[1] == '\0'))
        return (-1);

Here:
    while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
