#include "binary_trees.h"
#include <stdlib.h>


/**
 * binary_tree_insert_right - inserts a node to the right child of parent
 * @parent: pointer to parent node
 * @value: value to store in new node
 *
 * Return: pointer to the new node, NULL value on error
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_bt_node;

	if (parent == NULL)
		return (NULL);
	new_bt_node = malloc(sizeof(binary_tree_t));
	if (!new_bt_node)
		return (NULL);
	new_bt_node->n = value;
	new_bt_node->parent = parent;
	new_bt_node->left = NULL;
	new_bt_node->right = NULL;
	if (parent->right)
	{
		new_bt_node->right = parent->right;
		new_bt_node->right->parent = new_bt_node;
		parent->right = new_bt_node;
	}
	else
	{
		parent->right = new_bt_node;
	}
	return new_bt_node;
}
