#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it recieves
 * @argc: Argument counter
 * @argv: Argument array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}