#include <unistd.h>
/**
 * _putchar - writes the charcter c to stdout
 * @c: The character to print
 *
 * Return: on sucess 1
 * on error: -1 returned, and error is set approprimately
 */
int _putchar(char c)
{
     return(write(1, &c, 1));
}
