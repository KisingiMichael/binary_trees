#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to insert node in the left of the tree
 * @parent: node to the root of the inserted left node
 * @value: value of the left inserted node
 *
 * Return: inserted node, otherwise NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	 binary_tree_t *new_left_node;

	if (parent == NULL)
		return (NULL);
	new_left_node = malloc(sizeof(binary_tree_t));
	if (new_left_node == NULL)
		return (NULL);

	new_left_node->n = value;
	new_left_node->parent = parent;
	new_left_node->right = NULL;

	if (parent->left != NULL)
	{
		new_left_node->left = parent->left;
		parent->left->parent = new_left_node;
	}
	else
		new_left_node->left = NULL;

	parent->left = new_left_node;

	return (new_left_node);
}
