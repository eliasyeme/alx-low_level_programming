#include "lists.h"
/**
 * print_list - print elements of list
 * @h: input list to print
 *
 * Return: number of elements printed
 */
size_t print_list(const list_t *h)
{
	const list_t *head = h;
	size_t i = 0;

	while (head)
	{
		if (head->str)
			printf("[%d] %s\n", head->len, head->str);
		else
			printf("[0] (nil)\n");
		i++;
		head = head->next;
	}

	return (i);
}
