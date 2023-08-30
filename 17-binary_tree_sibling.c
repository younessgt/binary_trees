#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling
 * of a node of a binary tree
 * @node: is a pointer to the node
 * Return: the sibling of the node or 0
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
	{
		if (node->parent->right != NULL &&
				node->parent == node->parent->right->parent)
			return (node->parent->right);
	}
	if (node->parent->right == node)
	{
		if (node->parent->left != NULL &&
				node->parent == node->parent->left->parent)
			return (node->parent->left);
	}
	return (NULL);
}
