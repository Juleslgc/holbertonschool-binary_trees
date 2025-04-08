#include "binary_trees.h"
<<<<<<< HEAD

/**
 * binary_tree_node - Function that creates a binary tree node.
 * @parent: It's a pointer that pointe to the parent node.
 * @value: It's a value to put in the new node.
 * Return: return new node in end.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
=======
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent
 * @value: value of new node
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new;

new = malloc(sizeof(binary_tree_t));
if (!(new))
	return (NULL);

new->n = value;
new->parent = parent;
new->left = NULL;
new->right = NULL;
return (new);
>>>>>>> alcinoe
}
