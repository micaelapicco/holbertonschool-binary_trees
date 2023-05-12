#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is a leaf
 *	@node: node to check
 * Return: 1 is leaf or 0 if isn´t leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	else if (!node->left && !node->right)
		return (1);

	else
		return (0);

}
