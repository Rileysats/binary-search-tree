#include "BinarySearchTree.h"
#include <cstddef>
#include <iostream>
BinarySearchTree::BinarySearchTree(int a){
right = NULL;
left = NULL;
data = a;

}
void BinarySearchTree::insert(int n){
		//check to see if data is the same as the input
		if(data==n){
			return;
		}	//if n is less than data go down left side
			if(n<=data){
				if(left==NULL){//if pointer is empty add to the pointer
					BinarySearchTree* node;
					node = new BinarySearchTree(n);
					left = node;
					//std::cout << this->data << " ";	
				}
				else{
					left->insert(n);//if there is alread a node there recall the function for that node
				}
			}	//if n is greater than data go down right side	
			if(n>data){
				if(right==NULL){//if pointer is empty add to the pointer
					BinarySearchTree* node;
					node = new BinarySearchTree(n);
					right = node;	
		 		}
		 	else{
		 		right->insert(n);
		 	}
		}
	}


void BinarySearchTree::print_inorder(){
	if (right == NULL and left == NULL){//if it has no connecting nodes return the int
	    std::cout << data << " ";
	    return;
	  }

	  if (right == NULL and left != NULL){//if there is a connecting node on the left go down it
	      left->print_inorder(); //recall for the other nodes on the left
	      std::cout << data << " "; //print this data
	  }
	  else if (right != NULL and left == NULL){//if there is a connecting node on the right go down it
	      std::cout << data << " "; //print this data before recursive call because it will be less than the right node
	      right->print_inorder();     
	  }
	    else{//if both right and left pointers are being used go down them
	    	left->print_inorder();
	    	std::cout << data << " "; 
	    	right->print_inorder(); 
		}
}
void BinarySearchTree::print_preorder(){
	if (right == NULL and left == NULL){
	    std::cout << data << " ";
	    return;
	  }

	  else if (right == NULL and left != NULL){
	      std::cout << data << " "; 
	      left->print_preorder(); 
	      
	      
	  }
	  else if (right != NULL and left == NULL){
	      std::cout << data << " ";    
	      right->print_preorder(); 
	          
	  }
	    else{
	    	std::cout << data << " "; 
	    	left->print_preorder();
	    	right->print_preorder(); 
		}

}

	void BinarySearchTree::print_postorder(){
	if (right == NULL and left == NULL){
	    std::cout << data << " ";
	    return;
	  }

	  if (right == NULL and left != NULL){
	      
	      left->print_postorder(); 
	      std::cout << data << " "; 
	      
	  }
	  else if (right != NULL and left == NULL){
	      
	      right->print_postorder();     
	      std::cout << data << " "; 
	  }
	    else{
	    	
	    	left->print_postorder();
	    	right->print_postorder(); 
	    	std::cout << data << " "; 
		}
	}