#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts a node as the left-child of another node
 *@parent: pointer to the parent node of the node to create
 *@value: value
 *Return: The returning
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

binary_tree_t *new_node;

if (!parent)
return (NULL);

new_node = malloc(sizeof(binary_tree_t));
if (!new_node)
eturn (NULL);

new_node->n = value;
new_node->parent = parent;
new_node->right = NULL;
