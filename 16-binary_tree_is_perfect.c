#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: the height of the tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	l = 1 + binary_tree_height(tree->left);
	r = 1 + binary_tree_height(tree->right);
	if (l > r)
		return (l);
	else
		return (r);
}
/**
 * binary_tree_is_perfect -  function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect and 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (l != r)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	else
		return (0);
}
