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
{

	if (!parent)
		return (NULL);

	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = NULL;
	if (parent->left)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);

}
