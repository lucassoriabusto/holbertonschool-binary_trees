#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures
 * the depth of a node in a binary tree
 * @tree: is a pointer to the root node
 *
 * @return: the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
	{
		depth = (binary_tree_depth(tree->parent) + 1);
		return (depth);
	}
	else
		return (0);
}
