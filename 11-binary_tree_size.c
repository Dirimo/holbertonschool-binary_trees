#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: The size of the tree, or 0 if the tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Size is 1 (current node) + size of left and right subtrees */
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
