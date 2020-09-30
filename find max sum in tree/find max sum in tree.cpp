#include <iostream>
using namespace std;

int findMaxSum(node* root, int& ans){
    if(root == NULL)
        return 0;
    if(root->left == NULL and root->right == NULL)
        return root->data;
    int l = findMaxSum(root->left, ans);
    int r = findMaxSum(root->right, ans);
    int val=root->data, maxval=INT_MIN;
    if(root->left != NULL){
        maxval = max(maxval, l);
        val += l;
    }
    if(root->right != NULL){
        maxval = max(maxval, r);
        val += r;
    }
    if(root->left != NULL and root->right != NULL)
        ans = max(ans, val);
    return root->data+maxval;
}