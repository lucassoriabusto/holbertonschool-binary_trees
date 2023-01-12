#include "binary_trees.h"
/**
 * binary_tree_t - Is a function that creates a binary tree node
 * @parent: father node
 * @value: element of the node
 *
 * Return: new node, or NULL if it failed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
