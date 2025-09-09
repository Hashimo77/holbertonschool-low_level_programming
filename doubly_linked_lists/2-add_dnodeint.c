#include <stdlib.h>

/**
* struct dlistint_s - doubly linked list
* @n: integer
* @prev: points to the previous node
* @next: points to the next node
*
* Description: doubly linked list node structure
*/
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list
* @head: double pointer to the head of the list
* @n: integer to store in the new node
*
* Return: address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
