#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts
 * a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	temp = parent->right;
	if (parent == NULL)
		return (NULL);

	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = temp;
	new_node->parent = parent;
	if (parent->right != NULL)
		parent->right->parent = new_node;
	parent->right = new_node;

	return (new_node);
}
