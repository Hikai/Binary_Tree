#ifndef _BINARY_TREE_H_
#define _BINARY_TREE_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	Node * left;
	Node * right;
	Node * parent;
} Node;

Node * createNode(int);
void addNode(Node *);
Node * searchNode(int);

#endif