#include "main.h"
/**
 * reverse_array - Reverse the elements of an array of integers
 * @a: Array of integers
 * @n: Number of elements in the array
 *
 * Description: This function takes an array of integers and the number of
 * elements in the array, and reverses the order of the elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}

