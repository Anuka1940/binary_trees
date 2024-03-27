#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 *
 * @node: Node to check
 * Return: int
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node != NULL && node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if is full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	if (!binary_tree_is_full(tree->left) || !binary_tree_is_full(tree->right))
		return (0);
	return (1);
}
