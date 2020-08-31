//g++ -o main.out -std=c++11 -O2 -Wall *.cpp 

// BIN: Establish the binary search tree using the constructor and insert for the given elements, 
// and print out the elements using print_inorder.
// BPR: Establish the binary search tree using the constructor and insert for the given elements,
//  and printout the elements using print_preorder.
// BPO: Establish the binary search tree using the constructor and insert for the given elements, 
// and print out the elements using print_postorder.

// Sample input 1: BIN 16 13 12 14 15 11
// Sample output 1: 11 12 13 14 15 16
// Sample input 2: BPO 20 5 3 12 2 33 23 35
// Sample output 2: 2 3 12 5 23 35 33 20
// Sample input 3: BPR 16 13 12 14 15 11
// Sample output 3: 16 13 12 11 14 15

#include <string>
#include <vector>
#include<iostream>
#include<sstream>
using namespace std;

#include "BinarySearchTree.h"

int main(int argc, char** args) {

int count = 0;
std::vector<string> v;

//input and add the inputs into a vector
std::string input;
getline(cin, input);
stringstream str_strm;
str_strm << input;
string temp_str;
string temp_int;
while(!str_strm.eof()) {
	str_strm >> temp_str;
	if(stringstream(temp_str) >> temp_int) {
		v.push_back(temp_int);
		count++;
	}
	temp_str = "";
}

//Check to see which functions to use
if(v.size()>1){
	BinarySearchTree a(stoi(v[1]));
	if(v[0] == "BIN"){
		for (int i = 2 ; i < count ; i++){
			a.insert(stoi(v[i]));
		}
		a.print_inorder();
	}
	else if (v[0]=="BPR"){
		for (int i = 2 ; i < count ; i++){
			a.insert(stoi(v[i]));
		}
	a.print_preorder();
	}	
	else if (v[0]=="BPO"){
		for (int i = 2 ; i < count ; i++){
			a.insert(stoi(v[i]));
		}
	a.print_postorder();
	}
}



}