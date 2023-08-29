#include "binary_trees.h"
/**
 * calc_node - function that calculate the max node
 * @tree  is a pointer to the root node
 * Return: the maximun
 */
size_t calc_node(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);

	l = 1 + calc_node(tree->left);
	r = 1 + calc_node(tree->right);
	if (l >= r)
		return (l);
	else
		return (r);
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: the height of the tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (calc_node(tree) - 1);
}
