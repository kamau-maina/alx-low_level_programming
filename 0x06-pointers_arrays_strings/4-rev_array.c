/*
 * File: 4-rev_array.c
 * Auth: Kamau Maina
 */

#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @n: the number of elements of the array
 * @a: the array of integers to be reversed
 */

void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}



