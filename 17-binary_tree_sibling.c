#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
binary_tree_t *parent;
if (node == NULL)
	return (NULL);

if (node->parent == NULL)
	return (NULL);

parent = node->parent;

if (parent->left == node && parent->right)
	return (parent->right);

if (parent->right == node && parent->left)
	return (parent->left);

return (NULL);
}
