#include "binary_trees.h"
#include "binary_trees.h"
/**
 * binary_tree_size - return size
 * @tree: ptr to tree root
 * Return: size of the tree
 *
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

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

/**
 * binary_tree_is_perfect - check perfect
 * @tree: ptr to tree
 * Return: int
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
		if (binary_tree_is_full(tree))
			return (1);
	return (0);
}
