#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a binary tree using in order traversal
 * @tree: pointer to tree traversed
 * @func: pointer to the callback
 * 
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
