#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = n % 10;

	printf("Last digit of %d is %d and ", n , rem);	

	if (rem > 5 )
	{
		printf("is greater than 5\n");
	}
	else if ( rem < 6 && rem != 0)
	{
		printf("is less than 6 and not 0\n");
	}
	else 
	{
		printf("is 0\n");
	}
	return (0);
}
