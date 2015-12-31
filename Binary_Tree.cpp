#include "Binary_Tree.h"
//Node * root = nullptr, * tmpLeft = nullptr, * tmpRight = nullptr;

Node * Store::create_node(int data)
{
	Node * node = new Node;
	node->data = data;
	node->node_left = nullptr;
	node->node_right = nullptr;
	node->node_parent = nullptr;
	return node;
}

void Store::add_node(Node * node)
{
	if (node_root == nullptr) {
		node_root = node;
		node_tmp_left->node_parent = node_root;
		node_tmp_right->node_parent = node_root;
		node_tmp_left = node_root->node_left;
		node_tmp_right = node_root->node_right;
	}
	else if (node_root->node_left == nullptr) {
		node_tmp_left->node_parent = node_tmp_left;
		node_tmp_left = node;
		node_tmp_left = node_tmp_left->node_left;
	}
	else if (node_tmp_right == nullptr) {
		node_tmp_right->node_parent = node_tmp_right;
		node_tmp_right = node;
		node_tmp_right = node_tmp_right->node_right;
	}
}

Node * Store::search_node(int data)
{
	Node * node = node_tmp_left;
	while (1) {
		if (node->data == data) {
			break;
		}
		node->node_parent = node_tmp_left->node_parent;
		if (node->node_parent == nullptr) {
			while (1) {
				node = node->node_right;
				if (node->data == data) {
					break;
				}
			}
			break;
		}
	}
}

void Store::separate_node(Node * node)
{
	if (node->node_parent == nullptr) {
		node->node_left = nullptr;
		node->node_right = nullptr;
	}
	else {
		node->node_left->node_parent = node->node_parent;
		node->node_right->node_parent = node->node_parent;
		node->node_left = nullptr;
		node->node_right = nullptr;
		destroy_node(node);
	}
}

void Store::destroy_node(Node * node)
{
	delete node;
}