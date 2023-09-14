#ifndef _VARIADIC_H_
#define _VARIADIC_H_

/**
 * struct token - token
 *
 * @token : format
 * @f: associated function
 */

typedef struct token
{
        char *token;
        void (*f)(char *, va_list);
} token_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
