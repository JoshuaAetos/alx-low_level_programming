#include <stdio.h>
/**
 * main - The main function
 * @argc: The argument counter
 * @argv: The argument vector
 * Return: Return 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
