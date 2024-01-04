#include "binary_trees.h"
/**
 * binary_tree_inorder - inorder
 * @tree: ptr to node
 * @func: function to print a node
 * Return: None
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);

}
