#include "binary_trees.h"
/**
 * binary_tree_uncle - return unce of the node(sibling of father)
 * @node: ptr to node to get its uncle
 * Return: ptr to uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
