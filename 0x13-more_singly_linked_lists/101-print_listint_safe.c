#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of the linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current, *temp;

current = head;
while (current)
{
	count++;
	printf("[%p] %d\n", (void *) current, current->n);
	temp = current->next;
	if (temp >= current)
	{
		printf("-> [%p] %d\n", (void *) temp, temp->n);
		exit(98);
	}
	current = temp;
}

return (count);
}

