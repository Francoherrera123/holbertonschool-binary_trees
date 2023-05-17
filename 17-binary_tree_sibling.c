#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 * Return: return a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right == node && node->parent->left)
		return (node->parent->left);
	if (node->parent->left == node && node->parent->right)
		return (node->parent->right);
	return (NULL);
}
