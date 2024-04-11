#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full.
 *
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 1 if it's full or 0 if not.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree ==  NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left)
		&& binary_tree_is_full(tree->right));
	}
	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 *
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 1 for a perfect and 0 otherwise.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (!binary_tree_is_full(tree))
	{
		return (0);
	}

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
	{
		return (0);
	}
	return (1);
}
