#include "Binary_Tree.h"

int main()
{
	Store * store = new Store;
	Node * node_a = store->create_node(1);
	Node * node_b = store->create_node(2);
	Node * node_c = store->create_node(3);
	Node * node_d = store->create_node(4);
	Node * node_e = store->create_node(5);
	Node * node_f = store->create_node(6);
	Node * node_g = store->create_node(7);
	node_a->set_node_left(node_b);
	node_a->set_node_right(node_e);
	node_b->set_node_left(node_c);
	node_b->set_node_left(node_d);
	node_b->set_node_parent(node_a);
	node_c->set_node_parent(node_b);
	node_d->set_node_parent(node_b);
	node_e->set_node_left(node_f);
	node_e->set_node_right(node_g);
	node_e->setnode_parent(node_a);
	node_f->set_node_parent(node_e);
	node_g->set_node_parent(node_e);
	store->inorder_traversal(node_a);
	store->separate_node(node_g);
	store->separate_node(node_f);
	store->separate_node(node_e);
	store->separate_node(node_d);
	store->separate_node(node_c);
	store->separate_node(node_b);
	store->separate_node(node_a);
	delete store;
	return 0;
}
