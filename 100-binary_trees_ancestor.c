#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 * Return: If no common ancestors return NULL, else return common ancestor.
 **/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *f_anc, *s_anc;

	for (f_anc = first; f_anc; f_anc = f_anc->parent)
		for (s_anc = second; s_anc; s_anc = s_anc->parent)
			if (f_anc == s_anc)
				return ((binary_tree_t *)f_anc);
	return (NULL);
}
