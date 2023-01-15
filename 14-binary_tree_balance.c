#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: is a pointer to the root node of the tree
 *
 * Return:  the balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int size;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size = (binary_tree_height_2(tree->left) -
				binary_tree_height_2(tree->right));
	}
	return (size);
}

/**
 * binary_tree_height_2 - measures the height
 * @tree: is a pointer to the root node
 * Return: left height and right height
 */
size_t binary_tree_height_2(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
		return (0);
	left = 1 + binary_tree_height_2(tree->left);
	right = 1 + binary_tree_height_2(tree->right);
	if (left > right)
		return (left);
	return (right);
}
