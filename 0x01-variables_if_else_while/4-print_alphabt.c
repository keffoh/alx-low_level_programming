#include <stdio.h>
/**
 * main - the main function of the code
 * Return: Always 0 (sucess)
 */
int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
if (lowerCase == 'e' || lowerCase == 'q')
{
lowerCase += 1;
}
else	
{
putchar (lowerCase);
lowerCase += 1;
}
}
putchar('\n');
return (0);

}
