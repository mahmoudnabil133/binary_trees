#include "binary_trees.h"
/**
 * 
 * 
*/

int max(int x, int y)
{
    if (x >= y)
        return (x);
    return (y);
}

size_t binary_tree_height(const binary_tree_t *tree)
{size_t left_height = 0, right_height = 0;

    if (!tree)
        return (-1);
    
    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);
    return (max(left_height, right_height) + 1);
}
