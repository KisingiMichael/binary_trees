#include "binary_trees.h"

unsigned char check_is_leaf(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
const binary_tree_t *node_leaf(const binary_tree_t *tree);
int perfect_recursive(const binary_tree_t *tree, size_t depth, size_t l);
int binary_tree_is_perfect(const binary_tree_t *tree);


/**
 * binary_tree_is_perfect - function to check perfect binary tree
 * @tree: pointer to root node of the tree
 *
 * Return: perfect tree, 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (perfect_recursive(tree,  binary_tree_depth(node_leaf(tree)), 0));
}


/**
 * check_is_leaf - function to check if node is leafe in a binary tree
 * @tree: pointer to the root node
 *
 * Return: 1, 0
 */
unsigned char check_is_leaf(const binary_tree_t *tree)
{
	return ((tree->left == NULL && tree->right == NULL) ? 1 : 0);
}

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


/**
 * node_leaf - return leaf of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: pointer of the leaf
 */
const binary_tree_t *node_leaf(const binary_tree_t *tree)
{
	if (check_is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? node_leaf(tree->left) : node_leaf(tree->right));
}

/**
 * perfect_recursive - function to check recursively perfect tree
 * @tree: pointer to the root node of the tree
 * @depth: depth of leaf
 * @l: Level of current node
 *
 * Return: 1, 0
 */
int perfect_recursive(const binary_tree_t *tree, size_t depth, size_t l)
{
	if (check_is_leaf(tree))
		return (l == depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (perfect_recursive(tree->left, depth, l + 1) &&
			  perfect_recursive(tree->right, depth, l + 1));
}
