/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * insertAtEveryKthNode(struct node *head, int K) {
	struct node*current, *temp;
	int c = 0;
	current = head;
	if ((head != NULL) && (K >= 1))
	{
		while (current != NULL)
		{
			c++;
			if (c == K)
			{
				temp = current->next;
				struct node *newNode = (struct node *)malloc(sizeof(struct node));
				current->next = newNode;
				newNode->num = K;
				newNode->next = temp;
				c = -1;

			}
			current = current->next;

		}
		return head;
	}
	else
	{
		return NULL;

	}

}