#include <stdlib.h>
#include <stdio.h>

/**
 * main -function
 * @argc: number ofinputs
 * @argv: array of inputs
 * Return: int
**/

int main(int argc, char const *argv[])
{
int i = 0;

while (argc--)
{
	printf("%s\n", argv[i]);
	i++;
}

return (0);
}
