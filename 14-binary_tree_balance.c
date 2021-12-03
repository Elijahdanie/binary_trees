#include "binary_trees.h"

/**
 * binary_tree_height - calculates height of tree
 * @tree: tree to calculate height of
 *
 * Return: ...
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (l >= r)
		return (1 + l);
	return (1 + r);
}

/**
 * binary_tree_balance - ...
 * @tree: ...
 *
 * Return: ...
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	return (l - r);
}
