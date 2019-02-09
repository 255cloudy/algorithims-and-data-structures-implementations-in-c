#include <stdio.h>
#include <stdlib.h>


struct node *transverse(struct node* ptr);
struct node *make_node (int dat);

//this structure holds one object in the linked list at a time
struct node
{
	int data;
	struct node *next;
}node;

struct linked_lst
{
	struct node *head;
	struct node *tail;
}list;


int main()
{
	list.head = (make_node(30));
	printf("%d\n", list.head->data);
	free(list.head);
	while((transverse(list.head))!= 0)
	{
		printf("%i\n",list.head );
	}
	printf("the memory allocation failed\n");
	ptr->data = dat;
	return ptr;
}

struct node *transverse(struct node* ptr)
{
	if (ptr->next != NULL)
	{
		return transverse(ptr->next);
	}
}