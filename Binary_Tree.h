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

	}
	~Node()
	{

	}
	int get_node();
	Node * get_node_left();
	Node * get_node_right();
	Node * get_node_parent();
	void set_node(int);
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
	void inorder_traversal(Node *);
	void separate_node(Node *);
	void destroy_node(Node * node);
};

#endif
