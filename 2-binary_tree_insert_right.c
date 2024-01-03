#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a right child
 * @parent: parent to insert a left child
 * @value: value of inserted node
 * Return: ptr to inserted Node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (!parent || !newNode)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = parent->right;
	if (parent->right)
		parent->right->parent = newNode;
	parent->right = newNode;
	return (newNode);

}
