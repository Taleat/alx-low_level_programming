#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * @argc: The size of the argv array.
 * @argv: An array containing the program command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", *argv++);
	return (0);
}
