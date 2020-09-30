#include <iostream>
using namespace std;
node *constructBSTFromPostOrder(int post[], int size){
    int i=size-1;
    node* root = new node(post[i--]);
    node* ptr = root;
    //complete the code
    return root;    
}


node *constructBSTFromPostOrder(int post[], int size){
    int i=size-1;
    node* root = new node(post[i--]);
    node* ptr = root;
    stack<node*> s;
    s.push(ptr);
    while(i >= 0){
        while(i>=0 and post[i] > ptr->data){
            ptr->right = new node(post[i--]);
            ptr = ptr->right;
            s.push(ptr);
        }
        while(!s.empty() and s.top()->data > post[i]){
            ptr = s.top();
            s.pop();
        }
        if(i >= 0)
            ptr->left = new node(post[i--]);
        ptr = ptr->left;
        s.push(ptr);
    }
    return root;    
}
