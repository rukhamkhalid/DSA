#include<iostream>
using namespace std;

struct node{
	int data;
	node*left;
	node*right;
};

/*
class Tree{
	private:
		node*root;
		node*curr;
	public:
		Tree(int d){
			root = new node;
			root = NULL;
			root->data = d;
		}
		void insert(int d){
			curr = new node;
			curr = root;
			
		}
	
	
	
};

*/


node*root = new node;
node*curr = new node;
void tree(int d){
	root->data = d;
	root->left = NULL;
	root->right = NULL;	
}

void insert(int d){
	node*newnode = new node;
	newnode->data = d;
	newnode->right = NULL;
	newnode->left = NULL;
	curr = root;
	while(curr->left!=NULL&&curr->right!=NULL){
		if(curr->data >= d){
			curr = curr->left;
		}
		else if(curr->data < d){
			curr = curr->right;
		}
	}
	if(curr->data >= d){
		curr->left = newnode;
	}
	else if(curr->data < d){
		curr->right = newnode;
	}
}

void traversal(node*curr){
	if(curr){
		traversal(curr->left);	
		cout<<curr->data<<"->";
		traversal(curr->right);
	}
}



int main(){
	tree(10);
	insert(15);
	insert(5);
	insert(3);
	insert(7);
	insert(12);
	insert(17);
	traversal(root);
	
	return 0;
}