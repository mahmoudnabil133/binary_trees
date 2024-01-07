#include "binary_trees.h"
/**
 * getMin - to get successor of righ child.
 * @root: right of node we want to delete.
 * Return: value of successor after deleting it.
*/
int getMin(bst_t *root)
{int min;

    if (!root->left)
    {
        root->parent->right = root->right;
        if (root->right)
        {
            root->right->parent = root->parent;
        }
        min = root->n;
        free(root);
        return(min);
    }
    while(root->left)
    {
        root = root->left;
    }
    min = root->n;
    root->parent->left = NULL;
    free(root);
    return (min);
}
/**
 * bst_remove - rm node from bst.
 * @root: root of tree.
 * @value: value of deleted node.
 * Return: ptr to root;
*/
bst_t *bst_remove(bst_t *root, int value)
{bst_t *newLink;
    if (!root)
        return (root);
    if (value < root->n)
    {
        root->left = bst_remove(root->left, value);
    }
    else if (value > root->n)
    {
        root->right = bst_remove(root->right, value);
    }
    else
    {
        if (!root->right)
        {
            newLink = root->left;
            if (newLink)
                newLink->parent = root->parent;
            free(root);
            return (newLink);
        }
        else if (!root->left)
        {
            newLink = root->right;
            if (newLink)
                newLink->parent = root->parent;
            free(root);
            return (newLink);
        }
        else
        {
            root->n = getMin(root->right);
            return (root);
        }
    }
    return (root);
}
