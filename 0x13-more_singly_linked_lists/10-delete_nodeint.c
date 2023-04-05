/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to pointer to head node
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int i;

if (*head == NULL) /* empty list */
	return (-1);

if (index == 0) /* delete first node */
{
	current = *head;
	*head = current->next;
	free(current);
	return (1);
}

prev = *head;
current = prev->next;
for (i = 1; current != NULL; i++)
{
	if (i == index) /* delete node at index */
	{
		prev->next = current->next;
		free(current);
		return (1);
	}

	prev = current;
	current = current->next;
}

return (-1); /* index out of range */
}

