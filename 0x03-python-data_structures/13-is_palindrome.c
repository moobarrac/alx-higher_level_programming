#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: head
 * Return: 1 if success, 0 if not palindrome
 */

int is_palindrome(listint_t **head)
{
	listint_t *fast = *head, *half = *head;

	if (!*head || !(*head)->next)
		return (1);

	while (half && fast && fast->next)
	{
		half = half->next;
		fast = fast->next->next;
	}
	reverse_listint(&half);

	fast = *head;

	while (fast && half)
	{
		if (fast->n != half->n)
			return (0);
		fast = fast->next;
		half = half->next;
	}
	return (1);
}
/**
 *reverse_listint -  reverses a listint_t linked list.
 * @head: double pointer to head node
 *
 *Return: a pointer to the first node of the reversed list
 */

	listint_t *reverse_listint(listint_t **head)
{

	listint_t *prev, *next;

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
