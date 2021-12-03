#include "binary_trees.h"

/**
 * binary_tree_sibling - gets node sibling
 * @node: pointer to the node to find the sibling of
 *
 * Return: returns the sibling or NULL on error
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
