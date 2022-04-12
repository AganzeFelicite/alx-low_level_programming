#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - function to return a two dimenssional aray
 * @width: width size
 * @height: size
 * Return: a multidimensional array
 */


int **alloc_grid(int width, int height)
{	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **)malloc(sizeof(int **) * height);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(sizeof(int *) * width);
		if (p[i] == NULL)
		{	free(p);
			for (j = 0; j <= i; j++)
			{
				free(p[j]);
			}
			return (NULL);
		}
	}
	for (i = 0 ; i < height; i++)
	{
		for (j = 0 ; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);

}
