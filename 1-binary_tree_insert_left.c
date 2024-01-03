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
{binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (!parent || !newNode)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	parent->left = newNode;
	return (newNode);

}
