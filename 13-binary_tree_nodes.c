#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one
 * child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the nodes.
 *
 * Return: The number of nodes with at least one child,
 * or 0 if the tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If the node has at least one child, count it as 1 */
	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	/* If the node has no children, return 0 */
	return (0);
}
