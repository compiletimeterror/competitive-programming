#include <iostream>
using namespace std;

pair<int, int> maxAncestorDiff(node* root, int& ans){
    if(root == NULL)
        return {0, 0};
    if(root->left == NULL and root->right == NULL)
        return {root->data, root->data};
    //complete the code
}
