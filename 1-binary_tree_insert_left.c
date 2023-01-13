#include "binary_trees.h"
/**
 * binary_tree_insert_left - Is  a function that inserts a node
 * as the left-child of another node
 * @parent: father node
 * @value: element of the node
 *
 * Return: new node, or NULL if it failed
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left)
	{
		parent->left->parent = new;
		new->left = parent->left;
	}
	else
		parent->left = new;
	{
		return (new);
	}

}
