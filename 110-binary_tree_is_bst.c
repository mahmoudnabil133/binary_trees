#include "binary_trees.h"
/**
 * binary_tree_is_bst - check if tree is bst or not
 * @tree: ptr to tree
 * Return: 0 or 1
 *
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{binary_tree_t *root = tree;
	int fl = 1, chl = 1, fr = 1, chr = 1, val;

	if (!tree)
		return (0);
	val = tree->n;
	if (!tree->right && !tree->left)
		if (val ) 

	if (tree->left)
	{
		chl = binary_tree_is_bst(tree->left);
		if (tree->n > tree->left->n)
			fl = 1;
		else
			fl = 0;
	}
	if (tree->right)
	{
		chr = binary_tree_is_bst(tree->right);
		if (tree->n < tree->right->n)
			fr = 1;
		else
			fr = 0;
	}
	return (chl * fl * chr * fr);
}
