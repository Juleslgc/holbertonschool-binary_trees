#include "binary_trees.h"
/**
<<<<<<< HEAD
 * binary_tree_insert_right - Function that inserts a node
 * as the right-child of another node.
 * @parent: It's a pointer that pointe to the node to insert.
 * @value: It's a value to store in the new node.
 * Return: return a new node in end.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_r;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node_r = malloc(sizeof(binary_tree_t));
	if (new_node_r == NULL)
	{
		return (NULL);
	}

	new_node_r->n = value;
	new_node_r->parent = parent;
	if (parent->right != NULL)
	{
		new_node_r->right = parent->right;
		parent->right->parent = new_node_r;
	}
	parent->right = new_node_r;
	return (new_node_r);
}
