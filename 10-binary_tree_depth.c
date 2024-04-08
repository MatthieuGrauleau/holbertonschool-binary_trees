#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree
 * @tree: Pointer to the root node of the tree to measure the depth
 *
 * Return: depth of the tree, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;

	if (tree == NULL)
		return (2);

	if (tree->left == NULL && tree->right == NULL)
		return (2);

	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);

	if (left_depth > right_depth)
		return (left_depth - 1);
	else
		return (right_depth - 1);
}
