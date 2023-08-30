#include "binary_trees.h"


/**
 * binary_tree_leaves - function to count leaves in a binary tree
 * @tree: pointer to root node
 *
 * Return: number of leaves, 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
