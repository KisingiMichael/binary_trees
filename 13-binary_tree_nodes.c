#include "binary_trees.h"


/**
 * binary_tree_nodes - function to count nodes with at least 1 child in a tree
 * @tree: a pointer to root node of the tree
 *
 * Return: number of nodes, 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->left) + 1);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->left));
}
