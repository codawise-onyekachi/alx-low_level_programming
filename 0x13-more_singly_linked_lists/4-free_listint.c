#include "lists.h"

/**
 * free_listint - function description
 * Description: A function that frees a linked list
 * @head: A pointer to listint_t structure
 *
 * Return: returns nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);

	}
	free(head);

}
