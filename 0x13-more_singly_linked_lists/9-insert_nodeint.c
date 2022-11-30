#include "lists.h"

unsigned int get_size(listint_t *head);

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head node of the linked list
 * @idx: index where the new node will be inserted
 * @n: data of the new node
 * Return: address to the new node, or NULL if unsuccessful.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev, *curr, *new;
	unsigned int count = 0;

	if ((!*head && idx != 0) || idx > get_size(*head))
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		if (!*head)
		{
			new->next = *head;
			*head = new;
			(*head)->next = NULL;
		}
		else
		{
			new->next = *head;
			*head = new;
		}
	}
	else
	{
		curr = *head;
		while (count < idx)
		{
			prev = curr;
			curr = curr->next;
			count++;
		}
		if (count == get_size(*head) - 1)
		{
			curr->next = new;
			new->next = NULL;
		}
		else
		{
			prev->next = new;
			new->next = curr;
		}
	}

	return (*head);
}

/**
 * get_size - computes the number of elements in the linked list
 * @head: pointer to the head node of the list
 * Return: number of elements in the list.
*/
unsigned int get_size(listint_t *head)
{
	unsigned int count_nodes = 0;

	while (head)
	{
		head = head->next;
		count_nodes++;
	}
	return (count_nodes);
}
