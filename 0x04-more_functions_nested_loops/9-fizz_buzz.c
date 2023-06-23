#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints numbers from 0 to 100
 * and FizzBuzz for 15 Fizz for 5 and Buzz
 * for 3
 * Return: Alaways 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
