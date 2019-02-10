//
// Created by rucha on 10/02/19.
//

#ifndef UNTITLED5_STRUCTURES_H
#define UNTITLED5_STRUCTURES_H

#endif //UNTITLED5_STRUCTURES_H

//this structure holds one object in the linked list at a time
typedef struct node
{
	int data;
	struct node *next;
};

typedef struct linked_lst
{
    int num_nodes;
	struct node *head;
	struct node *tail;
};
//this function creates a node and places it at the end of the list
