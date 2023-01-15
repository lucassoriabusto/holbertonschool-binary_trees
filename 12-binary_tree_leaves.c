#include "binary_trees.h"
/**
 * binary_tree_nodes - a function that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: leaves of a binary
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	leaves = (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	return (leaves);
}
