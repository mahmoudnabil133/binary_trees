#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - create a node of a tree and link it with its parent
 * @parent: parent of node
 * @value: value of the node
 * Return: ptr to created node then assigned it to root in main file
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}
