#include <iostream>
using namespace std;

class SmallestElement{
    int k;
public:
    void traverse(node* root, int K, int& res){
        if(root == NULL)
            return;
        if(root->left==NULL and root->right==NULL){
            k++;
            if(k == K)
                res = root->data;
            return;
        }
        traverse(root->left, K, res);
        k++;
        if(k == K)
            res = root->data;
        traverse(root->right, K, res);
    }
    int KthSmallestElement(node *root, int K){
        int res=-1;k=0;
        traverse(root, K, res);
        return res;
    }
  
};
