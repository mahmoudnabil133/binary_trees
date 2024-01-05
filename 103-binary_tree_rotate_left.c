#include "binary_trees.h"
/**
 * binary_tree_rotate_left - it rotates left
 * @tree: ptr to tree
 * Return: ptr to new root
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{binary_tree_t *newRoot, *oldLeft;
	if (!tree || !tree->right)
		return (NULL);

	newRoot = tree->right;
	oldLeft = tree->right->left;
	newRoot->left = tree;
	tree->parent = newRoot;
	newRoot->parent = NULL;
	tree->right = oldLeft;
	if (oldLeft)
		oldLeft->parent = tree;
	return (newRoot);
}
