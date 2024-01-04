#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if the node is leaf or not
 * @node: node to check
 * Return: int
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return(0);
	if (!node->left && !node->right)
		return (1);
	return (1);

}
