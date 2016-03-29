/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	struct node *current, *next;
	current = head;
	int len = 0, c1 = 0, flag = 0;
	if (head != NULL)
	{
		if (current->next == NULL)
		{
			return current->num;
		}
		else
		{
			while (current != NULL)
			{
				len++;
				current = current->next;
			}
			current = head;
			while (current != NULL)
			{
				c1++;
				if ((c1 == (len / 2)) && ((len % 2) == 0))
				{
					return ((current->num) + ((current->next)->num)) / 2;
					flag = 1;
				}
				else if ((c1 == (len / 2)) && ((len % 2) != 0))
				{
					return ((current->next)->num);
				}
				current = current->next;
			}
		}
	}
	else
	{
		return -1;
	}

}
