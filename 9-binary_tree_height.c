#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 *
 * @tree: a pointer to the root node of the tree to measure the height.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree->parent == NULL)
	{
		return (2);
	}

	if ((tree->parent->parent == NULL && tree->left == NULL)
	|| (tree->parent->parent == NULL && tree->right == NULL))
	{
		return (1);
	}
	return (0);
}
