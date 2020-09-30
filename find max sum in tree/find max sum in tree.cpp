#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;
    Node() : val(0), left(nullptr), right(nullptr) {}
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
    Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}
};

int ans=INT_MIN;
int findMaxSum(Node* root,int &ans)
{
    if(root==NULL)
        return 0;
    int l=max(findMaxSum(root->left,ans),0);
    int r=max(findMaxSum(root->right,ans),0);
    ans=max(ans,root->val+l+r);
    return root->val+max(l,r);
}
