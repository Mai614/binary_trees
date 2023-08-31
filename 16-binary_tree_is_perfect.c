#include "binary_trees.h"
/**
 * is_perfect_recursive - Checks if a tree is perfect recursively.
 * @tree: The tree to check.
 *
 * Return: 0 if the tree is not perfect, or the level of height if it is.
 */

int is_perfect_recursive(const binary_tree_t *tree)
{

int left_level, right_level;
left_level = 0, right_level = 0;

if (tree->left && tree->right)
{
left_level = 1 + is_perfect_recursive(tree->left);
right_level = 1 + is_perfect_recursive(tree->right);

if (left_level == right_level && left_level != 0 && right_level != 0)
return (left_level);

return (0);
}
else if (!tree->left && !tree->right)
{
return (1);
}
else
{
return (0);
}
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the binary tree is perfect, 0 otherwise or if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int result = 0;

if (tree == NULL)
{
return (0);
}
else
{
result = is_perfect_recursive(tree);
if (result != 0)
{
return (1);
}
return (0);

}
}

