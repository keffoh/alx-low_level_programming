#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Deternine the main function
 * Return: 0 success
 */
int main(void)
{
	int n;
	int lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
        lastnum = n % 10;
        if (lastnum > 5)
        {
                printf("last digit of %d is %d and is grater 5\n, n, lastnum);
        }
	else if (lastnum == 0)
        {
               printf("Last digit of %d is %d and 0\n", n, lastnum); 
        }
        else if (lastnum < 6 && lastnum != 0)
        {
              printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);
        }
	return (0);
}
