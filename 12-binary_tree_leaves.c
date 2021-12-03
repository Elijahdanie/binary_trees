#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in the binary tree
 * @tree: the tree being counted
 * 
 * Return: returns the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	if (!tree && !tree->left && !tree->right)
		return (0);
	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);
	return (l + r);
}
