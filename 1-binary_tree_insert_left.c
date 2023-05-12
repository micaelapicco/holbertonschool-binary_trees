#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent node to new node
 * @value: value new node
 * Return: pointer to new node or NULL if fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (parent->left == NULL)
		parent->left = new;

	else if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left = new;
		new->left->parent = new;
		new->right = NULL;
	}
	return (new);
}
