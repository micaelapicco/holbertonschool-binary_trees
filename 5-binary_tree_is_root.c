#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is a root
 *	@node: node to check
 * Return: 1 is leaf or 0 if isn´t leaf
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	else if (!node->parent)
		return (1);

	else
		return (0);

}
