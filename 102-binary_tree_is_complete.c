#include "binary_trees.h"
/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the binary tree is complete, 0 otherwise or if tree is NULL.
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{

if (tree == NULL)
return (0);

return (is_complete_recursive(tree, 0, binary_tree_size(tree)));

}

/**
 * is_complete_recursive - Checks if a binary tree is complete recursively.
 * @tree: Pointer to the root node of the current subtree.
 * @index: The index of the current node.
 * @size: The total size of the binary tree.
 *
 * Return: 1 if the binary tree is complete, 0 otherwise.
 */

int is_complete_recursive(const binary_tree_t *tree, size_t index, size_t size)
{

if (tree == NULL)
return (1);

if (index >= size)
return (0);

return (is_complete_recursive(tree->left, 2 * index + 1, size) &&
is_complete_recursive(tree->right, 2 * index + 2, size));
}
