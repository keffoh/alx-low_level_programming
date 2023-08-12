#include <stdio.h>
/**
 * main - the main function of the code
 * Return: Always 0 (sucess)
 */
int main(void)
{
          int i = '0';
          while (i <= '9')
	  {
	    putchar (i);
            for (i != '9')
           {   
		putchar(',');
	        putchar(' ');
           }
	   ++i;

        }
        putchar('\n');
        return (0);

}
