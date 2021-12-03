#include "binary_trees.h"

/**
 * checkheight - calculates height of tree
 * @tree: tree to calculate height of
 *
 * Return: ...
 */
size_t checkheight(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);
	l = checkheight(tree->left);
	r = checkheight(tree->right);
	if (l >= r)
		return (1 + l);
	return (1 + r);
}

/**
 * binary_tree_is_perfect - checks for perfect tree
 * @tree: tree to check
 *
 * Return: returns 1 if perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;

	if (!tree)
		return (0);
	l = tree->left;
	r = tree->right;
	if (!tree && !tree->left && !tree->right)
		return (1);
	if (!l || !r)
		return (0);
	if (checkheight(l) == checkheight(r))
	{
		if (binary_tree_is_perfect(l) && binary_tree_is_perfect(r))
			return (1);
	}
	return (0);
}
