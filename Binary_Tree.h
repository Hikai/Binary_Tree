#ifndef _BINARY_TREE_H_
#define _BINARY_TREE_H_

#include <iostream>

using namespace std;

class Node {
private :
	int data;
public :
	Node * node_left;
	Node * node_right;
	Node * node_parent;
	Node()
	{

	}
	~Node()
	{

	}
	int get_node();
	void set_node(int);
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
	void inorder_traversal(Node *);
	void separate_node(Node *);
	void destroy_node(Node * node);
};

#endif
