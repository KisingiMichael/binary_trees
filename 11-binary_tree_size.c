#include "binary_trees.h"

/**
 * binary_tree_size - function to compute size of the binary tree
 * @tree: pointer to root node of the tree
 *
 * Return: size of the tree, 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	return (0);
}
