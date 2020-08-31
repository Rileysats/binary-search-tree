#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

class BinarySearchTree {
public:
	BinarySearchTree(int a);
	BinarySearchTree* left;
	BinarySearchTree* right;
	int data;
	BinarySearchTree* search;
	void insert(int a);
	void print_inorder();
	void print_preorder();
	void print_postorder();
};
#endif