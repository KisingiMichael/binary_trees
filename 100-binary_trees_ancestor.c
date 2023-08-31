#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree);

/**
 * binary_trees_ancestor - function to find the lowest common ancestor
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the ancestor node, NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t first_depth, second_depth;

	if (!first || !second)
		return (NULL);

	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);

	while (first_depth > second_depth)
	{
		first = first->parent;
		first_depth--;
	}
	while (second_depth > first_depth)
	{
		second = second->parent;
		second_depth--;
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
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
