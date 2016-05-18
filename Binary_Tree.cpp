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

void set_node_data(int data)
{
	this.data = data;
}

void set_node_left(Node * left)
{
	node_left = left;
}

void set_node_right(Node * right)
{
	node_right = right;
}

void set_node_parent(Node * parent)
{
	node_parent = parent;
}

Node * Store::create_node(int data)
{
	Node * node = new Node;
	node->set_node_data(data);
	return node;
}

void Store::print_inorder_traversal(Node * node_traversal)
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

void Store::destroy_node(Node * node)
{
	delete node;
}
