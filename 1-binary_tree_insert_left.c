#include "binary_trees.h"
#include <stdlib.h>


/**
 * binary_tree_insert_left - inserts a node to the left child of parent
 * @parent: pointer to parent node
 * @value: value to store in new node
 *
 * Return: pointer to the new node, NULL value on error
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left)
	{
		new_bt_node->left = parent->left;
		new_bt_node->left->parent = new_bt_node;
		parent->left = new_bt_node;
	}
	else
	{
		parent->left = new_bt_node;
	}
	return new_bt_node;
}
