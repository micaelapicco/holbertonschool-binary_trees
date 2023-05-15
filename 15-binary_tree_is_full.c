#include "binary_trees.h"

/**
 * binary_tree_is_full -  function that checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: Always 0 (Success)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (!tree)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	if (tree->left && tree->right)
	{
		right = binary_tree_is_full(tree->right);
		left = binary_tree_is_full(tree->left);
		if (right == left)
			return (1);

	}

	return (0);

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
