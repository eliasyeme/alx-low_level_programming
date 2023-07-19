/**
	* int_index - search for an integer
	* @array: search in
	* @size: number of element in array
	* @cmp: function to compare values
	*
	* Return: index of the first element where cmp
	* function does not return 0, if no element match
	* return -1, if size <= 0 return -1
	*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
