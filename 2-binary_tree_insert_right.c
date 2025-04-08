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
=======
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new;

if (!(parent))
	return (NULL);

new = malloc(sizeof(binary_tree_t));
if (!(new))
	return (NULL);

new->n = value;
new->parent = parent;
new->left = NULL;
new->right = NULL;

if (!(parent->right))
	parent->right = new;

else
{
	parent->right->parent = new;
	new->right = parent->right;
	parent->right = new;
}
return (new);
>>>>>>> alcinoe
}
