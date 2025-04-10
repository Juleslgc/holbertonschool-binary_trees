#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree node.
 * @parent: It's a pointer that pointe to the parent node.
 * @value: It's a value to put in the new node.
 * Return: return new node in end.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
