#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(char c);
int print_string(char *str);
int flag(char c, va_list arg);
int print_int(int num);
int count_digit(int num);
int print_binary(unsigned int num);
void print_bit(unsigned int num);
int count_bit(unsigned int num);
int _strlen(char *str);
int print_rev(char *s);
void print_octal_bit(unsigned int num);
int count_octal_bit(unsigned int num);
int print_octal(unsigned int num);
int count_unsigned_digit(unsigned int num);
int print_unsigned(unsigned int num);
int print_hexa_upper(unsigned int num);
int count_hexa_bit(unsigned int num);
void print_hexa_bit(unsigned int num);
void print_hexa_bit_lower(unsigned int num);
int print_hexa_lower(unsigned int num);
int print_buffer(char *str);
int rot13(char *str);

#endif /* MAIN_H */
