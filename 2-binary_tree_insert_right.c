#include "binary_trees.h"
/**
* binary_tree_insert_right - Inserts a node as the right-child
* of another node.
* @parent: A pointer to the node to insert the right-child in.
* @value: The value to store in the new node.
*
* Return: A pointer to the created node, or NULL on failure
*	  or if parent is NULL.
*         If parent already has a right-child, the new node
*	  takes its place,
*         and the old right-child is set as the right-child
*	  of the new node.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
binary_tree_t *old_right;
if (parent == NULL)
return (NULL);
/* Create the new node */
new_node = binary_tree_node(parent, value);
if (new_node == NULL)
return (NULL);
/* If the parent already has a right child */
if (parent->right != NULL)
{
/* Store the old right child */
old_right = parent->right;
/* Set the new node as the right child of the parent */
parent->right = new_node;
/* Set the old right child as the right child of the new node */
new_node->right = old_right;
/* Update the parent of the old right child */
old_right->parent = new_node;
}
else
{
/* Otherwise, simply set the new node as the right child */
parent->right = new_node;
}
return (new_node);
}
