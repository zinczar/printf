#ifndef _HOLBERTON_H
#define _HOLBERTON_H

#include <stdarg.h>

typedef struct operation
{
        char operate;
        int(*f)(va_list arguments);
} ops;

int (*get_percent(const char s))(va_list);
int _strcmp(char *str1, char *str2);
int _putchar(char c);
int get_character(va_list);
int get_string(va_list);
int get_decimal(va_list);
int get_integer(va_list);
int _printf(char *format, ...);

#endif