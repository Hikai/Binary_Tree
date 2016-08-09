#ifndef _BINARY_TREE_H_
#define _BINARY_TREE_H_

#include <iostream>

using namespace std;

class Node {
private :
	int data;
	Node * node_left;
	Node * node_right;
	Node * node_parent;
public :
	Node()
	{
		set_node_data(NULL);
		set_node_left(nullptr);
		set_node_right(nullptr);
		set_node_parent(nullptr);
	}
	~Node()
	{
		set_node_data(NULL);
		set_node_left(nullptr);
		set_node_right(nullptr);
		set_node_parent(nullptr);
	}
	int get_node_data(void);
	Node * get_node_left(void);
	Node * get_node_right(void);
	Node * get_node_parent(void);
	void set_node_data(int);
	void set_node_left(Node *);
	void set_node_right(Node *);
	void set_node_parent(Node *);
};

class Store {
public:
	Store()
	{
	}
	~Store()
	{

	}
	Node * create_node(int);
	void print_inorder_traversal(Node *);
	void separate_node(Node *);
	void destroy_node(Node *);
};

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
	Store::print_inorder_traversal(node_traversal->node_left);
	cout << node_traversal->data << ", ";
	Store::print_inorder_traversal(node_traversal->node_right);
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

#endif
