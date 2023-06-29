/**
 * reverse_array - it does as the name says
 * @a: the array to reverse
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int j, i = 0;

	for (; i < n / 2; i++)
	{
		j = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = j;
	}
}
