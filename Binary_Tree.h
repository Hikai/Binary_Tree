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
public:
	Node * node_root = nullptr;
	Node * node_tmp_left = nullptr;
	Node * node_tmp_right = nullptr;
	Node * create_node(int);
	void add_node(Node *);
	Node * search_node(int);
	void separate_node(Node *);
	void destroy_node(Node *);
	Store()
	{

	}
	~Store()
	{

	}
};

#endif