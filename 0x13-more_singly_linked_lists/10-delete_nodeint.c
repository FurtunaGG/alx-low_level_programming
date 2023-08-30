#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t prev, ptr;
	unsigned int i = 0;

	if (!*head || !head)
		return (-1);
	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	ptr = *head;

	while (ptr)
	{
		if (i == index)
		{
			prev->next = ptr->next;
			free(ptr);
			return (1);


		}
		i++;
		prev = ptr;
		ptr = ptr->next
	}
	return (-1);
}
