#include "lists.h"

/**
	* get_nodeint_at_index - get node at index
	* @head: list to search
	* @index: input index
	*
	* Return: found node or NULL
	*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index)
	{
		index--;
		if (head)
			head = head->next;
		else
			break;
	}

	if (index == 0 && head)
		return (head);

	return (NULL);
}
