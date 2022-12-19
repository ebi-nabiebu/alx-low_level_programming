#include "main.h"
/**
* swap_int - This function swaps the values of two integers.
* @a: This is the 1st integer
* @b: This is the 2nd integer
* Return: 0
*/
void swap_int(int *a, int *b)
{

int ebi = *a;
*a = *b;
*b = ebi;
}
