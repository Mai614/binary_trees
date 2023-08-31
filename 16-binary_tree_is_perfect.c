#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the binary tree, or 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

if (tree == NULL)
return (0);

size_t left_height = binary_tree_height(tree->left);
size_t right_height = binary_tree_height(tree->right);

return ((left_height > right_height ? left_height : right_height) + 1);

}

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 *
 * Return: Size of the binary tree, or 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

if (tree == NULL)
return (0);

return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));

}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the binary tree is perfect, 0 otherwise or if tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

if (tree == NULL)
return (0);

size_t height = binary_tree_height(tree);
size_t size = binary_tree_size(tree);

return ((size == (1 << height) - 1));

}
