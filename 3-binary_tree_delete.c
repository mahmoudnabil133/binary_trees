#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - delete a BT
 * @tree: ptr to root
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (!tree->left && !tree->right)
	{
		free(tree);
		return;
	}
	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);
	if (tree)
	{
		free(tree);
		return;
	}
}
