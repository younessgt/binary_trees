#include "binary_trees.h"
/**
 * binary_tree_nodes -  function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: the number of nodes that have at least 1 child or 0 if not
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	l = 1 + binary_tree_nodes(tree->left);
	r = 1 + binary_tree_nodes(tree->right);
	return (l + r - 1);
}
