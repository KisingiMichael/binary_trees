#include "binary_trees.h"


/**
 * binary_tree_height - function to compute height of the binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: height of the tree or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t left_length = 0, right_length = 0;

        if (tree == NULL)
                return (0);
        left_length = tree->left ? 1 + binary_tree_height(tree->left) : 0;
        right_length = tree->right ? 1 +  binary_tree_height(tree->right) : 0;
        return ((left_length > right_length) ? left_length : right_length);

        return (0);
}


/**
 * binary_tree_balance - function to measure balance factor of the binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: balance factor, 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return ( binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	else
		return (0);
}
