#include <iostream>
using namespace std;
node *constructBSTFromPostOrder(int post[], int size){
    int i=size-1;
    node* root = new node(post[i--]);
    node* ptr = root;
    //complete the code
    return root;    
}

