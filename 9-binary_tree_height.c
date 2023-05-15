#include "binary_trees.h"
/**
 * binary_tree_height_r -  measures the height of a binary tree in recursive
 * @tree: is a pointer to the root node of the tree to measure the height
 * @is_first: 0 - Isn't first node | 1 - Is first node
 * Return: return height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int i = 0, j = 0;

	if (!tree)
		return (0);
	if (tree->left)
		i = 1 + binary_tree_height(tree->left);
	if (tree->right)
		j = 1 + binary_tree_height(tree->right);
	return ((i < j) ? j : i);
}
