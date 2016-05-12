#include "Binary_Tree.h"

int Node::get_node_data(void)
{
	return data;
}

Node * Node::get_node_left(void)
{
	return node_left;
}

Node * Node::get_node_right(void)
{
	return node_right;
}

Node * Node::get_node_parent(void)
{
	return node_parent;
}

Node * Store::create_node(int data)
{
	Node * node = new Node;
	node->data = data;
	node->node_left = nullptr;
	node->node_right = nullptr;
	node->node_parent = nullptr;
	return node;
}

void Store::inorder_traversal(Node * node_traversal)
{
	if (node_traversal == nullptr) {
		return;
	}
	Store::inorder_traversal(node_traversal->node_left);
	cout << node_traversal->data << ", ";
	Store::inorder_traversal(node_traversal->node_right);
}

void Store::separate_node(Node * node)
{
	node->node_left = nullptr;
	node->node_left = nullptr;
	node->node_right = nullptr;
	node->node_parent = nullptr;
	Store::destroy_node(node);
}
