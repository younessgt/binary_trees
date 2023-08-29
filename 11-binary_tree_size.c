#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: the size of the tree or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = 0;
	size_t size_right = 0;


	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	size_left = 1 + binary_tree_size(tree->left);
	size_right = 1 + binary_tree_size(tree->right);
	return (size_left + size_right - 1);
}
