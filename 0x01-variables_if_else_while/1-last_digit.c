#include <stdio.h>
#include <time.h>
/**
 * main - Determine whether a number is positive or negative
 * Return: 0 (success)
 */
int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX /2;
	/* my code goes there */
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n, n, "positive")
	}
	else
	{
		printf(%d is %s\n", n, "zero");
	}
	return (0);
}
