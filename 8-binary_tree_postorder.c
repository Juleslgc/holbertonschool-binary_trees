#include "binary_trees.h"
/**
 * binary_tree_postorder - Function that goes through a binary tree
 * using post-order traversal.
 * @tree: It's a pointer that pointe the root node of the tree to traverse.
 * @func: It's a pointer function that call a function for
 * each node and passed the value in the node as a parameter.
 * Return: return void in end.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
