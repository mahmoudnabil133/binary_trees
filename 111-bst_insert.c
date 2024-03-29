#include "binary_trees.h"
/**
 * bst_insert - insert a node
 * @tree: ptr to tree
 * @value: value
 * Return: ptr to Node;
 *
*/
bst_t *bst_insert(bst_t **tree, int value)
{bst_t *bstNode;
	if (!tree)
		return (NULL);
	if (!*tree)
	{
		bstNode = (bst_t *)binary_tree_node(NULL, value);
		*tree = bstNode;
		return (*tree);
	}
	if (value < (*tree)->n)
	{
		(*tree)->left = bst_insert(&(*tree)->left, value);
		(*tree)->left->parent = (*tree);
		bstNode = (*tree)->left;
	}
	else if (value > (*tree)->n)
	{
		(*tree)->right = bst_insert(&(*tree)->right, value);
		(*tree)->right->parent = (*tree);
		bstNode = (*tree)->right;
	}
	return (*tree);
}
