#include "Binary_Tree.h"

Node * Store::create_node(int data)
{
	Node * node = new Node;
	node->data = data;
	node->node_left = nullptr;
	node->node_right = nullptr;
	node->node_parent = nullptr;
	return node;
}

//Node * Store::search_node(int data)
//{
//}

void Store::separate_node(Node * node)
{
	node->node_left = nullptr;
	node->node_left = nullptr;
	node->node_right = nullptr;
	node->node_parent = nullptr;
	delete node;
}

void Store::destroy_node(Node * node)
{
	delete node;
}