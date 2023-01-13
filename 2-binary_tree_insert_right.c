#include "binary_trees.h"
/**
 * binary_tree_insert_right - Is  a function that inserts a node
 * as the right-child of another node
 * @parent: father node
 * @value: element of the node
 *
 * Return: new node, or NULL if it failed
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	new = binary_tree_node(parent, value);

	if (new == NULL)
	{
		return (NULL);
	}

	if (parent->right)
	{
		parent->right->parent = new;
		new->right = parent->right;
	}
	parent->right = new;
	return (new);

}
