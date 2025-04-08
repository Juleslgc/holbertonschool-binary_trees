#include "binary_trees.h"
/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree.
 * @tree: It's a pointer that pointe to the root node of the
 * tree to count the number of leaves.
 * Return: return the function in end.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
