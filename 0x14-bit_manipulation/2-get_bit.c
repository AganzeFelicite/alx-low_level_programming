#include "main.h"

/**
 * get_bit - prints the bit at index
 * @n: number being changed to base two
 * @index: the index number which we want to get
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/*check if index is part of n*/
	if (index >= (sizeof(n) * 8))
		return (-1);/* error index is not part of bit*/
	/*index is in bit*/
	return ((n >> index) & 1);/* get the bit at that index*/
}
