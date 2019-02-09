#include <stdio.h>
#include <stdlib.h>
//
// Created by rucha on 09/02/19.
//

struct linked_lst
{
    int num_nodes;
	struct node *head;
	struct node *tail;
};

//this structure holds one object in the linked list at a time
struct node
{
	int data;
	struct node *next;
};

//this function creates a node and places it at the end of the list

struct node *make_node(int dat, struct linked_lst *ptr_List)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("memory allocation failed miserably");
    }
    ptr->data = dat;
    if (ptr_List -> num_nodes ==0)
    {
        ptr_List -> head = ptr;
    } else if (ptr_List -> num_nodes == 1)
    {
        ptr_List -> tail = ptr;
    } else
    {
        ptr_List->tail->next = ptr;
        ptr_List->tail = ptr;
    }
    return ptr;
}

//this function recursively goes through the list to getits values
struct node *transverse(struct node* ptr)
{
	if (ptr->next != NULL)
	{
		return transverse(ptr->next);
	}
}

//this function allocates memory for a list object
struct linked_lst *make_list()
{
    struct linked_lst *list_ptr = (struct linked_lst*) malloc(sizeof(struct linked_lst));
    return list_ptr;
}
