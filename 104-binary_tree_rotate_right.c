#include "binary_trees.h"
/**
 * binary_tree_rotate_right - it rotates left
 * @tree: ptr to tree
 * Return: ptr to new root
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{binary_tree_t *newRoot, *oldRight;
	if (!tree || !tree->left)
		return (NULL);
	newRoot = tree->left;
	oldRight = tree->left->right;
	newRoot->right = tree;
	newRoot->parent = NULL;
	tree->parent = newRoot;
	tree->left = oldRight;
	if (oldRight)
		oldRight->parent = tree;
	return (newRoot);

}
