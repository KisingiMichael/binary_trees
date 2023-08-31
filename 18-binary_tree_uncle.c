#include "binary_trees.h"

binary_tree_t *binary_tree_uncle(binary_tree_t *node);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/**
 * binary_tree_sibling - function to find a sibling of a node
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


/**
 * binary_tree_uncle - function to to find the uncle of a node
 * @node: pointer to the node
 *
 * Return: pointer to node with uncle, NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
