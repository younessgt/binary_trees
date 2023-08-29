#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth
 * of a node of a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: the depth of the node or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
		depth = 1 + binary_tree_depth(tree->parent);
	else
		return (0);
	return (depth);
}
