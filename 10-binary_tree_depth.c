#include "binary_trees.h"
/**
 * binary_tree_depth - Function that measures the depth
 * of a node in a binary tree.
 * @tree: It's a pointer that pointe to the node to measure the depth.
 * Return: Return depth in end.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
	{
		return (0);
	}

	for (depth = 0 ; tree->parent != NULL; depth++)
	{
		tree = tree->parent;
	}
	return (depth);
}
