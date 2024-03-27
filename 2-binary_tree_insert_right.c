#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * Where parent is a pointer to the node to insert the right-child in
 * And value is the value to store in the new node
 * @parent: Parent tree node
 * @value: int value to assing to the right node
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL;

	if (parent == NULL)
		return (NULL);
	right_node = binary_tree_node(parent, value);
	if (right_node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}
	parent->right = right_node;
	return (right_node);
}
