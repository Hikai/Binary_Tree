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
	void inorder_traversal(Node *);
	void separate_node(Node *);
	void destroy_node(Node * node);
};

#endif
