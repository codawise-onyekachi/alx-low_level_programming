#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - function description
 * Description: A function that prints a listint_t linked list
 * @head: A pointer to listint_t structure
 *
 * Return: The number of nodes. Exits with 98 on failure
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL;
	const listint_t *len = NULL;
	size_t counter = 0;
	size_t new_n;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		counter++;
		temp = temp->next;
		len = head;
		new_n = 0;

		while (new_n < counter)
		{
			if (temp == len)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (counter);

			}
			len = len->next;
			new_n++;

		}
		if (!head)
		{
			exit(98);

		}
	}
	return (counter);

}
