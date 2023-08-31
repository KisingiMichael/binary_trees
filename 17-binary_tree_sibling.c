#include "binary_trees.h"

/**
 * binary_tree_sibling - functio to find a sibling of a node
 * @node: pointer to a node with sibling
 *
 * Return: pointer to the sibling, NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);

}
