#include "main.h"
/**
 * print_last_digit - checks for the last digit 
 *@n: The number to be checked
 * 
 * Return: value of the last digit of the number
 */
int print_last_digit(int n)
{
     int last;
    
     last = n % 10;
     if (last < 0)
     {
     last = last * -1;
     }
     _putchar(last + '0');
     return (0); 
        
}
