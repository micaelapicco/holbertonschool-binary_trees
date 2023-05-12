#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree:  pointer to the root node of the tree to measure the size
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (!tree)
		return (0);

	right = binary_tree_size(tree->right);
	left = binary_tree_size(tree->left);

	return (left + right + 1);

}
