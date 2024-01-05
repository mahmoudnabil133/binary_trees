#include "binary_trees.h"
#include "binary_trees.h"
/**
 * max - max of 2 int
 * @x: x
 * @y: y
 * Return: int
*/
int max(int x, int y)
{
	if (x >= y)
		return (x);
	return (y);
}
/**
 * binary_tree_is_root - check if the node is leaf or not
 * @node: node to check
 * Return: int
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);

}
/**
 * binary_tree_height - height of tree
 * @tree: ptr to head
 * Return:height
 *
*/
size_t binary_tree_height(const binary_tree_t *tree)
{size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (binary_tree_is_root(tree))
	{
		left_height -= 1;
		right_height -= 1;
	}
	return (max(left_height, right_height) + 1);
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
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		if (binary_tree_is_full(tree))
			return (1);
	return (0);
}
