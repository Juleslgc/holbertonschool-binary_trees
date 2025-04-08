#include "binary_trees.h"
/**
 * binary_tree_preorder - Function that goes through a binary tree
 * using pre-order traversal.
 * @tree: It's a pointer that pointe the root node of the tree to traverse.
 * @func: It's a pointer function that call a function for
 * each node and passed the value in the node as a parameter.
 * Return: return void in end.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
