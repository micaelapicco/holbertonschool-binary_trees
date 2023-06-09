#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent node
 * @value: value new node
 * Return: pointer to new node or NULL if fails
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (parent->right == NULL)
		parent->right = new;

	else if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right = new;
		new->right->parent = new;
		new->left = NULL;
	}
	return (new);
}
