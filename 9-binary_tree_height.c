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
 * binary_tree_height - height of tree
 * @tree: ptr to head
 * Return:height
 *
*/
size_t binary_tree_height(const binary_tree_t *tree)
{size_t left_height = 0, right_height = 0;

	if (!tree)
		return (-1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (max(left_height, right_height) + 1);
}
