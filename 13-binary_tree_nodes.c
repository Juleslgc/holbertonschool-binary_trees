#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t lnode = 0, rnode = 0, nodes = 0;

if (tree == NULL)
	return (0);

if (tree->left || tree->right)
	nodes++;

lnode = binary_tree_nodes(tree->left);
rnode = binary_tree_nodes(tree->right);

nodes += (lnode + rnode);

return (nodes);
}
