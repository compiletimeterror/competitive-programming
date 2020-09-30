#include <iostream>
using namespace std;
int NumberOFTurns(node* root, int first, int second){
    if(root == NULL)
        return -1;
    //complete the code
}


int NumberOFTurns(node* root, int first, int second){
    if(root == NULL)
        return -1;
    node* lca = commonAncestor(root, first, second);
    v1.clear(), v2.clear();
    int turns=1;
    vector<node*> v;
    traverse(lca, first, v);
    v.clear();
    traverse(lca, second, v);
    for(int i=v1.size()-2; i>0; i--)
        if((v1[i]->left and v1[i]->left == v1[i+1] and v1[i-1]->right and v1[i-1]->right == v1[i]) or (v1[i]->right and v1[i]->right == v1[i+1] and v1[i-1]->left and v1[i-1]->left == v1[i]))
            turns++;
    for(int i=v2.size()-2; i>0; i--)
        if((v2[i]->left and v2[i]->left == v2[i+1] and v2[i-1]->right and v2[i-1]->right == v2[i]) or (v2[i]->right and v2[i]->right == v2[i+1] and v2[i-1]->left and v2[i-1]->left == v2[i]))
            turns++;
    
    if(lca->data == first or lca->data == second)
        return turns-1;
    return turns;
}
