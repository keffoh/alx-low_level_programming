#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: 0 on sucess
 */
int main(void)
{
       int n;
       srand(time(0));
       n = rand() -RAND_MAX / 2;
       /* my code goes here */
       if (n < 0)
       {
             printf("%d is %s\n", n, "negative");
       }
       else if (n > 0 )
       {
              printf("%d is %s\n", n, "positive");
       }
       else
       {
              printf("%d is %s\n", n, "zero");
       }
       return (0);
}