#include "binary_trees.h"
/**
 * binary_tree_is_perfect - fuction that check if a tree is perfect
 * @tree: data
 * Return: 1 on success, 0 if fail.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;
	int left_leaves = 0, right_leaves = 0;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves == right_leaves);
}