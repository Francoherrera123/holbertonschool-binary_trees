#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent of new binary tree node
 * @value: value of new binary tree node
 * Return: return a new binarry tree node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
