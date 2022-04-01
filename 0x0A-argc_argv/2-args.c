#include <stdlib.h>
#include <stdio.h>

/**
 * main -function
 * @argc: number ofinputs
 * @argv: array of inputs
 * Return: int
**/

int main(int argc, char *argv[])
{

int i;

for (i = 0; i < argc; i++)

{ 

printf("%s\n", argv[i]);

}

return (0);

}
