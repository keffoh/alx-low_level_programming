#include "main.h"
/**
 * print last_digit - the last_digit to be printed
 * @n:last_digut to be checked
 * Return: value of the last_digit of a number
 */
int print_ last_digit(int n)
{
     int last;
     last = n % 10;
     if (last < 0)
     {
     last -last * -1
     }
     _putchar(last + '0');
     return (last);
}
