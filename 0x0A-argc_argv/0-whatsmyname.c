#include "main.h"
/**
 * main - print the name of the file
 * @argc: number of arguments
 * @argv: array of arguments
 * @_attribute_((unused)): Unused attribute
 * Return: 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
