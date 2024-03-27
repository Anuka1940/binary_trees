#include "binary_trees.h"
/**
 * binary_tree_leaves - pointer to the root node of the tree to count
 * the number of leaves
 *
 * @tree:pointer to the root node of the tree to count the number of leaves
 * Return: Number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);
	counter += (tree->right == NULL && tree->left == NULL) ? 1 : 0;
	counter += binary_tree_leaves(tree->left);
	counter += binary_tree_leaves(tree->right);

	return (counter);
}
