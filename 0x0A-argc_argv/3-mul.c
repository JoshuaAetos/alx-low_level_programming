#include <stdio.h>
#include <stdlib.h>
/**
 * main - The main function
 * @argc: The argument counter
 * @argv: The argument vector
 * Return: Return 0 always
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
