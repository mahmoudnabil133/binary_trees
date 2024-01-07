#include "binary_trees.h"
/**
 * bst_search - search a value in tree
 * @tree: ptr to root
 * @value: value to search
 * Return: ptr to searched node
*/
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree || tree->n == value)
		return ((bst_t *)tree);
	if (value < tree->n)
		return (bst_search(tree->left, value));
	return (bst_search(tree->right, value));
}
