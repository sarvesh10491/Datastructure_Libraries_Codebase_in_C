//################################################################################################
//
// Program     : Ring buffer library implementation
// Source file : main.c
// Author      : Sarvesh Patil
//
//################################################################################################


#include <stdio.h>
#include <stdlib.h>
#include "ring_buffer_lib.h"

// User defined node data structure & print function for that data
//=================================================================
struct mynodedata
{
	int var1;
	int var2;
};

void mybuffprint(void *arg)		// Prints complete buffer
{
	struct mynodedata *nodedata = (struct mynodedata *)arg;
    if (nodedata == NULL) 
    	return;
    
    printf(" %2d %2d ->", nodedata->var1, nodedata->var2 );
}

void mynodeprint(void *arg)		// Prints particular node that has been pushed or popped
{
	struct mynodedata *nodedata = (struct mynodedata *)arg;
    if (nodedata == NULL) 
    	return;
    
    printf(" %2d %2d \n", nodedata->var1, nodedata->var2 );
}
//=================================================================

//++++++
// Main
//++++++
int main()
{
	int buff_nodes;	// Sets number of nodes within Ring Buffer

	//User defined variables
	buff_nodes=10;
	ringbuffer buff1;
	struct mynodedata *ndptr;

	createBuff(&buff1, buff_nodes);

	for(int i=0; i<12; i++)
	{
		ndptr=(struct mynodedata *)malloc(sizeof(struct mynodedata));
		ndptr->var1=11+10*i;
		ndptr->var2=12+10*i;

		push(&buff1, ndptr);
		printf("Pushed node ");
		mynodeprint(ndptr);
	}

	printBuff(&buff1, mybuffprint);
	printf("\n");

	ndptr=(struct mynodedata *)pop_queue(&buff1);
	printf("Queue popped node ");
	mynodeprint(ndptr);

	printBuff(&buff1, mybuffprint);

	ndptr=(struct mynodedata *)pop_queue(&buff1);
	printf("Queue popped node ");
	mynodeprint(ndptr);

	ndptr=(struct mynodedata *)pop_queue(&buff1);
	printf("Queue popped node ");
	mynodeprint(ndptr);

	printBuff(&buff1, mybuffprint);
	printf("\n");



	ndptr=(struct mynodedata *)pop_stack(&buff1);
	printf("Stack popped node ");
	mynodeprint(ndptr);

	printBuff(&buff1, mybuffprint);

	ndptr=(struct mynodedata *)pop_stack(&buff1);
	printf("Stack popped node ");
	mynodeprint(ndptr);

	ndptr=(struct mynodedata *)pop_stack(&buff1);
	printf("Stack popped node ");
	mynodeprint(ndptr);

	printBuff(&buff1, mybuffprint);

	return 0;
}