#include "binary_trees.h"
/**
 * binary_tree_height - measures the height
 * @tree: is a pointer to the root node
 * Return: left height and right height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return ((left_height) + 1);
	}
	else
		return ((right_height) + 1);
}
