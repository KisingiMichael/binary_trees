#include "binary_trees.h"


/**
 * binary_tree_postorder - function to traverse a tree postoder manner
 * @tree: node to the tree
 * @func: pointer to a function to call nodes during traversal
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	 func(tree->n);
}

