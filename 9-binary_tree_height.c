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
