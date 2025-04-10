#include "binary_trees.h"
/**
 * binary_tree_uncle - Function that finds the uncle of a node.
 * @node: It's a pointer that pointer to the node to find the uncle.
 * Return: return NULL if node has no uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent != NULL && node->parent->parent != NULL)
	{
		if (node->parent->parent->right == node->parent)
		{
			return (node->parent->parent->left);
		}
		if (node->parent->parent->left == node->parent)
		{
			return (node->parent->parent->right);
		}
	}
	return (NULL);
}
