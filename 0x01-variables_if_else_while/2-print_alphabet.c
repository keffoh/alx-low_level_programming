#include <stdio.h>
#include <ctype.h>
/**
 * main - the main function of the code
 * Return: Always 0 (sucess)
 */
int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
putchar (lowerCase);
lowerCase += 1;
}
putchar('\n');
return (0);

}
