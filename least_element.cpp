#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

typedef struct node
{
	int val;
	struct node *right;
	struct node *left;
	struct node *parent;
}node;


node* insert(node *root)
{;
	int inp;
	cin>>inp;
	node *temp=root;
	if(temp==NULL)
	{
		
	(root)	=(node*)malloc(sizeof(node));
	
		(root)->val=inp;
		(root)->parent=NULL;
		(root)->left=NULL;
		(root)->right=NULL;
		return root;
		

	}
	else
	{
		
		while(temp!=NULL)
		{
			if(temp->val>inp)
			{
				
				if(temp->left==NULL)
				{
					node *temp2=temp->left;
					temp2=(node*)malloc(sizeof(node));
					temp2->val=inp;
					temp2->parent=temp;
					temp2->left=NULL;
					temp2->right=NULL;
					temp->left=temp2;
					return root;
				}
				else
					temp=temp->left;
			}
			else if(temp->val<inp)
			{
				//cout<<"hryt"<<endl;
				if(temp->right==NULL)
				{
					node *temp2=temp->right;
					temp2=(node*)malloc(sizeof(node));
					temp2->val=inp;
					temp2->parent=temp;
					temp2->left=NULL;
					temp2->right=NULL;
					temp->right=temp2;
					return root;
				}

				else
					temp=temp->right;
			}

		}
		return root;
	}

}
node *leftmost(node *root)
{
	while(root!=NULL && root->left!=NULL)
		root=root->left;
	return root;
}


int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	node *root=NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		// int num;
		// cin>>num;
		
		root=insert(root);
	
	}
	node *nn=leftmost(root);
	cout<<nn->val<<endl;
	
	
	
	

}