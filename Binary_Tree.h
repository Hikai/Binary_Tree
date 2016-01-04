#ifndef _BINARY_TREE_H_
#define _BINARY_TREE_H_

#include <iostream>

using namespace std;

class Node {
public :
	int data;
	Node * node_left;
	Node * node_right;
	Node * node_parent;
	Node()
	{

	}
	~Node()
	{

	}
};

class Store {
private :
	void destroy_node(Node * node)
	{
		delete node;
	}
public:
	Node * create_node(int);
	void inorder_traversal(Node *);
	void separate_node(Node *);
	Store()
	{

	}
	~Store()
	{

	}
};

#endif