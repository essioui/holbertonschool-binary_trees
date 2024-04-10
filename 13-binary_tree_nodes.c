#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer
 *
 * Return: Numeber of nodes, 0 if tree is NULL or pointer isn't node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (!tree || (!tree->left && !tree->right))
return (0);

return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
