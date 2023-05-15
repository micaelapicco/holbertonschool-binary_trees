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

	if (!(tree->left) && !(tree->right))
		return (1);

	if (tree->left && tree->right)
	{
		right = binary_tree_is_full(tree->right);
		left = binary_tree_is_full(tree->left);
		return (right && left);

	}

	return (0);

}

