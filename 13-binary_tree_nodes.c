#include "binary_trees.h"
/**
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left_nodes;
	int right_nodes;
	int nodes;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	else
	{
		left_nodes = binary_tree_nodes(tree->left);
		right_nodes = binary_tree_nodes(tree->right);
		nodes = left_nodes + right_nodes;
		return (nodes + 1);
	}
}
