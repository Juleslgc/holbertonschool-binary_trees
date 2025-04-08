#include "binary_trees.h"
/**
 * balance_height - Function that finds the height of a node.
 * @tree: It's a pointer that pointe the root node.
 * Return: return the height in end.
 */

int balance_height(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	return (balance_height(tree->left) + balance_height(tree->right));
}

/**
 * binary_tree_balance - Function that measures the balance
 * factor of a binary tree.
 * @tree: It's a pointer that pointe to the root node of
 * the tree to measure the balance factor.
 * Return: return the balance factor in end.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (balance_height(tree->left) - balance_height(tree->right));
}
