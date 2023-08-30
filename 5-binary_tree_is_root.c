#include "binary_trees.h"


/**
 * binary_tree_is_root - function to check if a node is root
 * @node: the node to be checked
 *
 * Return: 0 or 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	else
		return (1);
}
