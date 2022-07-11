#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* va_list,va_start,va_end,va_arg*/
#include <stdlib.h> /* malloc, free */
#include <unistd.h> /* write */
/* for testing purpose,removed when done */
#include <stdio.h>

/* utility functions */
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
/*void _putchar(char *c, int len);*/
int _putchar(char c);
void _puts(char *str);
char *create_a_buffer(void);
int scan_buffer_overflow(char *buffer, int len);
void print_buffer(char *buffer, int len, va_list list);
char* (*get_func(char i))(va_list);
int process_format(char *format, va_list valist);
void process_func(char *f, int* counter, int* len);

/* printf functions */
int _printf(char *format, ...);
char *print_c(va_list list);
char *print_s(va_list list);

/**
 * struct types - defining struct fields
 * @ch: identifier of type to print (e.g. c means char)
 * @func: ptr to functions that print according to identifier (e.g. print_c)
 */
<<<<<<< HEAD
typedef struct flags
{
<<<<<<< HEAD
	int plus;
	int space;
	int hash;
=======
    int plus;
    int space;
    int hash;
>>>>>>> 6ad6ff8ec786e15761ec3d46a561f7c494d5c931
} flags_t;
=======
>>>>>>> 05b99741a134c0354c5a8f55b8bd256520e45b9f

typedef struct types
{
<<<<<<< HEAD
<<<<<<< HEAD
	char c;
	int (*f)(va_list ap, flags_t *f);
=======
    char c;
    int (*f)(va_list ap, flags_t *f);
>>>>>>> 6ad6ff8ec786e15761ec3d46a561f7c494d5c931
} ph;

/* print_nums */
int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);

/* print_bases */
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);

/* converter */
char *convert(unsigned long int num, int base, int lowercase);

/* _printf */
int _printf(const char *format, ...);

/* get_print */
int (*get_print(char s))(va_list, flags_t *);

/* get_flag */
int get_flag(char s, flags_t *f);

/* print_alpha */
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);

/* write_funcs */
int _putchar(char c);
int _puts(char *str);

/* print_custom */
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);

/* print_address */
int print_address(va_list l, flags_t *f);

/* print_percent */
int print_percent(va_list l, flags_t *f);

=======
	char ch;
	char* (*func)(va_list);
} print;
>>>>>>> 05b99741a134c0354c5a8f55b8bd256520e45b9f

#endif
