#include "binary_trees.h"
/**
 * array_to_bst - convert array to bst
 * @array: arr to convert.
 * @size: size of array
 * Return: ptr to node
*/
bst_t *array_to_bst(int *array, size_t size)
{size_t i;
	bst_t *root = NULL;

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		bst_insert(&root, array[i]);
	}
	return (root);

}
