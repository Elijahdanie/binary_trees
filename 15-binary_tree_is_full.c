#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if tree is full
 * @tree: the tree to check
 *
 * Return: returns 1 if full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);
	if (!tree && !tree->left && !tree->right)
		return (1);
	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);
	if (l == 0 || r == 0)
		return (0);
	return (1);
}
