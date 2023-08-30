#include "binary_trees.h"


/**
 * binary_tree_preorder - function to traverse a tree in preoder manner
 * @tree: node to the tree
 * @func: pointer to a function to call nodes during traversal
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
