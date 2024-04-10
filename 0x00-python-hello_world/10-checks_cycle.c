#include "lists.h"

/**
 * check_cycle - chekcs if a linked lists contains a cycle
 * @lists: linked list to check
 * Return: 1 if the list has a cycle, 0 if it has no cycle
 */

int checks_cycle(listsint_t *list)
{
	listsint_t *slow = list;
	listsint_t *fast = list;
	
	if (!list)
		return (0);
	while (slow && fast && fast ->next)
	{
		slow = slow->next;
		fast = fast->next-.next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
