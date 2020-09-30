#include <iostream>
using namespace std;

pair<int, int> maxAncestorDiff(node* root, int& ans){
    if(root == NULL)
        return {0, 0};
    if(root->left == NULL and root->right == NULL)
        return {root->data, root->data};
    //complete the code
}

pair<int, int> maxAncestorDiff(node* root, int& ans){
    if(root == NULL)
        return {0, 0};
    if(root->left == NULL and root->right == NULL)
        return {root->data, root->data};
    pair<int, int> l = maxAncestorDiff(root->left, ans);
    pair<int, int> r = maxAncestorDiff(root->right, ans);
    int minval=root->data, maxval=root->data;
    if(root->left != NULL){
        minval = min(minval, l.first);
        maxval = max(maxval, l.second);
        ans = max(ans, max(abs(root->data-l.first), abs(root->data-l.second)));
    }
    if(root->right != NULL){
        minval = min(minval, r.first);
        maxval = max(maxval, r.second);
        ans = max(ans, max(abs(root->data-r.first), abs(root->data-r.second)));
    }
    return {minval, maxval};
}
