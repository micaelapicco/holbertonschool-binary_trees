#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree:  is a pointer to the root node of the
 * tree to count the number of leaves
 * Return: leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (!tree)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	right = binary_tree_leaves(tree->right);
	left = binary_tree_leaves(tree->left);

	return (right + left);
}

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

