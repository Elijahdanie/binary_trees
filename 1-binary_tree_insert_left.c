#include "binary_trees.h"
#include "stdlib.h"


/**
 * binary_tree_insert_left - ...
 * @parent: ....
 * @value: ....
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *bt_node, *leftnode_cache;

    bt_node = malloc(sizeof(binary_tree_t));
    if (!bt_node)
    {
        return NULL;
    }
    bt_node->n = value;
    bt_node->left = NULL;
    bt_node->right = NULL;
    if (!parent->left)
    {
        bt_node->left = parent->left;
        bt_node->left->parent = bt_node;
        bt_node->parent = parent;
        parent->left = bt_node;
    }
    else
    {
        bt_node->parent = parent;
        parent->left = bt_node;
    }
    return bt_node;
}