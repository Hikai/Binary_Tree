#include "Binary_Tree.h"

int main()
{
	Node * node1 = new Node;
	Node * node2 = new Node;
	Node * node3 = new Node;
	Node * search_node = new Node;
	Store * store = new Store;
	node1 = store->create_node(123);
	node2 = store->create_node(321);
	node3 = store->create_node(132);
	store->add_node(node1);
	store->add_node(node2);
	store->add_node(node3);
	search_node = store->search_node(123);
	cout << search_node->data << endl;
	store->separate_node(node3);
	store->separate_node(node2);
	store->separate_node(node1);
	delete store;
	delete search_node;
	delete node3;
	delete node2;
	delete node1;
	return 0;
}