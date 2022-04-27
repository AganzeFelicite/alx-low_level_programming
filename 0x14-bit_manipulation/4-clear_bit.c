#include "main.h"

/**
 * clear_bit - set the bit at index to 0
 * @n: number being changed to base two
 * @index: the index number which we want to get
 * Return: 1 if works and or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num = 1;
	/*check if index is part of n*/
	if (index >= (sizeof(n) * 8))
		return (-1);/* error index is not part of bit*/
	/*check if the index bit is 0 or not*/
	if ((*n >> index) & num)/*enters loop if index bit is 1*/
		*n ^= (num << index);/*changes 1 to 0*/
	return (1);
}
