#include "binary_trees.h"
/**
 * binary_tree_is_full - all nodes have 2 chils or 0
 * @tree: ptr to root
 * Return: is full or not
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right));
}
