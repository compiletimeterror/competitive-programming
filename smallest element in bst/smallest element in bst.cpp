#include <iostream>
using namespace std;

class SmallestElement{
	int k;
public:

// this function will return kth smallest node 
// and in driver function we can access the element as Node* res = KthSmallest(root, k);
// and then res -> data 
	

	Node* KthSmallestElement(node *root, int k) {
		if (root == nullptr) 
			return nullptr; 

    // search in left subtree 
		Node* left = KthSmallestElement(root -> left, k); 

    // if k'th smallest is found in left subtree, return it 
		if (left != nullptr) 
			return left; 

    // if current element is k'th smallest, return it 
		k--; 
		if (k == 0) 
			return root; 

    // else search in right subtree 
		return KthSmallestElement(root -> right, k); 

	}

};
