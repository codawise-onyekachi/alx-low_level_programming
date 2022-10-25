#include "lists.h"

/**
 * free_listint2 - function description
 * description: A function that frees a list and sets head to NULL
 * @head: A pointer to listint_t structure
 *
 * Return: returns nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;

	}
	temp = *head;
	while (*head)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);

	}
	*head = NULL;

}
