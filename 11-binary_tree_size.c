#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: is a pointer to the root node
 *
 * Return:  size of a binary
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size = (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
		return (size);
	}
}
