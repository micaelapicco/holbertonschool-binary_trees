#include "binary_trees.h"

/**
 * binary_tree_is_full -  function that checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: Always 0 (Success)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (0);

	if (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right))
		return (1);

	if (tree->left || tree->right)
	{
		binary_tree_is_full(tree->right);
		binary_tree_is_full(tree->left);
		return (0);
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