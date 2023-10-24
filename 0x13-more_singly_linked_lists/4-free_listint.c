#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/***
 * free_listint - a function that frees linked list
 * @head: pointer to the first node of the list
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
