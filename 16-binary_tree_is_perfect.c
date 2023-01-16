#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (binary_tree_height_2(tree->left) != binary_tree_height_2(tree->right))
		return (0);

	if (tree->left && tree->right)
	{
		perfect = (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right));
		return (perfect);
	}
	else
		return (0);
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
