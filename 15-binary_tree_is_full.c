#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);

	if ((l == 0 && r == 0) || (l == 1 && r == 1))
		return (1);
	else
		return (0);
}
