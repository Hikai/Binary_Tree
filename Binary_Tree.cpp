#include "Binary_Tree.h"

Node * root = nullptr, * tmpLeft = nullptr, * tmpRight = nullptr;

Node * createNode(int data)
{
	Node * node = (Node *) malloc (sizeof (Node *));
	node->data = data;
	node->left = nullptr;
	node->right = nullptr;
	node->parent = nullptr;

	return node;
}

void addNode(Node * node)
{
	if (root == nullptr) {
		root = node;
		tmpLeft->parent = root;
		tmpRight->parent = root;
		tmpLeft = root->left;
		tmpRight = root->right;
	}
	else if (tmpLeft == nullptr) {
		tmpLeft->parent = tmpLeft;
		tmpLeft = node;
		tmpLeft = tmpLeft->left;
	}
	else if (tmpRight == nullptr) {
		tmpRight->parent = tmpRight;
		tmpRight = node;
		tmpRight = tmpRight->right;
	}
}

Node * searchNode(int data)
{
	Node * node = tmpLeft;

	while (1) {
		if (node->data == data) {
			break;
		}

		node->parent = tmpLeft -> parent;

		if (node->parent == nullptr) {
			while (1) {
				node = node->right;

				if (node->data == data) {
					break;
				}
			}
			
			break;
		}
	}

	return node;
}