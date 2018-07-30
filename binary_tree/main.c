//################################################################################################
//
// Program     : Binary Tree library implementation
// Source file : main.c
// Author      : Sarvesh Patil
//
//################################################################################################

#include <stdio.h>
#include <stdlib.h>
#include "b_tree_lib.h"


// User defined node data structure & print function for that data
//=================================================================
void myprint(double arg)
{   
    printf(" %d ->", (int)arg );
}
//=================================================================

//++++++
// Main
//++++++
int main()
{
	//User defined variables
	binarytree *btree1=createBtree();
	printf("\n");

	insertNode(btree1, 20);
	insertNode(btree1, 10);
	insertNode(btree1, 30);
	insertNode(btree1, 15);
	insertNode(btree1, 25);

	printf("No. of nodes in tree : %d\n", nodeCount(btree1) );
	printf("\n");

	printf("Inorder Traversing :");
	printInorder(btree1, myprint);
	printf("\n");

	printf("Preorder Traversing :");
	printPreorder(btree1, myprint);
	printf("\n");

	printf("Postorder Traversing :");
	printPostorder(btree1, myprint);
	printf("\n");

	destroyBtree(btree1);
	printf("\n");

	return 0;
}