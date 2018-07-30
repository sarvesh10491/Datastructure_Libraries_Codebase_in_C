//################################################################################################
//
// Program     : Binary Tree library implementation
// Source file : b_tree_lib.h
// Author      : Sarvesh Patil
//
//################################################################################################
// adding BFS

// Binary Tree Node structure
//============================
struct node
{
	double data;
	struct node *left;
	struct node *right;
};

typedef struct node *binarytree;


// Binary Tree functions definitions
//===================================

// Create new Binary Tree
binarytree *createBtree();

// Destroy created Binary Tree
void destroyBtree(binarytree *btree);

// Count & return number of nodes in Binary Tree
int nodeCount(binarytree *btree);

// print Binary Tree nodes by traversing inorder & display data calling user-defined print function
void printInorder(binarytree *btree, void (*print)(double data));

// print Binary Tree nodes by traversing preorder & display data calling user-defined print function
void printPreorder(binarytree *btree, void (*print)(double data));

// print Binary Tree nodes by traversing postorder & display data calling user-defined print function
void printPostorder(binarytree *btree, void (*print)(double data));

// Insert new node in Binary Tree
void insertNode(binarytree *btree, double data);