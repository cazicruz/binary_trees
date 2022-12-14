#include "binary_trees.h"

/**
 * 
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value){
	if (parent == null){
		parent = malloc(sizeof(binary_tree_t));
		parent->n = value;
		parent->left = null;
		parrent -> right = null;
	}
}
