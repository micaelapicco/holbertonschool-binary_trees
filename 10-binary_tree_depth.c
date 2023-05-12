#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree:  pointer to the root node of the tree to measure the depth
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int count = 0;

	if (!tree)
		return (0);

	count = binary_tree_depth(tree->parent);

	if (tree->parent)
		return (count + 1);

	return (count);
}
