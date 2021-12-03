#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is a leaf node
 * @node: pointer to the node being checked
 *
 * Return: returns 1 if is leaf node else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
