#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as the right-child of another node.
 * @parent: pointer to the node to insert the right-child in.
 * @value: value to store in the new node.
 *
 * Return: pointer to new node.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = value;
	node->parent = parent;
	node->left = NULL;

	if (parent->right != NULL)
		(parent->right)->parent = node;
	{
		node->right = parent->right;
		parent->right = node;
	}

	return (node);
}
