#include "main.h"
/**
 * swap_int -swap variables values
 * @a:pointer one
 * @b:pointer two
 * Return void
*/
void swap_int (int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
