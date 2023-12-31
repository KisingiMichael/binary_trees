#include "binary_trees.h"


/**
 * binary_tree_is_leaf - function to check if the node is a leaf
 * @node: node to be checked
 *
 * Return: 1 or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	else
		return (1);
}
