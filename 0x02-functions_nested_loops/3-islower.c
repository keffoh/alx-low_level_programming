#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: character to be checked
 * Return: 1 check for lowercase or 0 anything else
 */
int islower(int c)
{
    if (c >= 97 && c <= 122)
    {
      return (1);
    }
      return (0);
}

