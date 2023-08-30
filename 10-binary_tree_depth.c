#include "binary_trees.h"


/**
 * binary_tree_depth - function to computer depth of the binary tree
 * @tree: pointer to  root node of the tree
 *
 * Return: depth, 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	return (0);
}
