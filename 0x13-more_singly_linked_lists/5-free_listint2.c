#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *next;


	if (!head)
		return;

	temp = *head;
	while (temp)
	{
		next = temp;
		temp = temp->next
		free(next);
	}

	*head = NULL;
}

