#include "binary_trees.h"


/**
 * binary_tree_node - function to create a binary tree node
 * @parent: pointer to root of the node to be created
 * @value: value of the created node
 *
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *my_new_node;

	my_new_node = malloc(sizeof(binary_tree_t));

	if (my_new_node == NULL)
		return (NULL);
	my_new_node->n = value;
	my_new_node->parent = parent;
	my_new_node->left = NULL;
	my_new_node->right = NULL;

	return (my_new_node);
}
