#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node of the two given nodes,
 * or NULL if no common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	binary_tree_t *left_lca = binary_trees_ancestor(first->left, second);
	binary_tree_t *right_lca = binary_trees_ancestor(first->right, second);

	if (left_lca && right_lca)
		return ((binary_tree_t *)first);
	return ((left_lca != NULL) ? left_lca : right_lca);
}

