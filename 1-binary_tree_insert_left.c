#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a left child
 * @parent: parent to insert a left child
 * @value: value of inserted node
 * Return: ptr to inserted Node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{binary_tree_t *newNode = NULL;

	if (!parent)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (!newNode)
		return (NULL);
	newNode->left = parent->left;
	if (parent->left)
		parent->left->parent = newNode;
	parent->left = newNode;
	return (newNode);

}
