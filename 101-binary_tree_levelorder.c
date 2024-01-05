#include "binary_trees.h"
/**
 * binary_tree_height - height of tree
 * @tree: ptr to head
 * Return:height
 *
*/
size_t binary_tree_height(const binary_tree_t *tree)
{size_t left_height = 0, right_height = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	return (right_height + 1);
}
/**
 * print_current_level - print tree level by level
 * @root: ptr to root of tree
 * @level: level order to print
 * @func: print function
*/
void print_current_level(const binary_tree_t *root, int level,
void (*func)(int))
{
	if (!root)
		return;
	if (level == 0)
	{
		func(root->n);
		return;
	}
	print_current_level(root->left, level - 1, func);
	print_current_level(root->right, level - 1, func);
}
/**
 * binary_tree_levelorder - level order traverse
 * @tree: ptr to tree
 * @func: to to printNode func
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{int height = 0, i;

	if (!tree || !func)
		return;
	height = binary_tree_height(tree);
	if (height == 0)
	{
		func(tree->n);
		return;
	}

	for (i = 0; i <= height; i++)
	{
		print_current_level(tree, i, func);
	}
}
