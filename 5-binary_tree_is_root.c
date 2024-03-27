#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is a root
 *
 * @node: Node to check
 * Return: 1 if is root otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	return (0);
}
