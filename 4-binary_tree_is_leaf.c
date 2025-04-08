#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Function that checks if a node is a leaf.
 * @node: It's a pointer that pointe to the node to check.
 * Return: return 1 if node is a leaf or 0 if node is NULL.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->right == NULL && node->left == NULL)
	{
		return (1);
	}
	return (0);
}
