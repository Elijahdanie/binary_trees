#include "binary_trees.h"
#include "stdlib.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent node
 * @value: value of node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *bt_node;

    bt_node = malloc(sizeof(binary_tree_t));
    if (bt_node == NULL)
        return (NULL);
    bt_node->n = value;
    bt_node->parent = parent;
    bt_node->left = NULL;
    bt_node->right = NULL;
    return (bt_node);
}
