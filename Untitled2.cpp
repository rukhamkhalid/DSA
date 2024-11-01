#include<iostream>
using namespace std;
struct node
{
	int data;
	node* next;
	
}; class Linkedlist
{
	node *front;
	node *rear;
	node *curr;
	
     Linkedlist()
	front=NULL;
	rear=NULL;
	
	
	void enqueue(int data)
	{
		node *newnode;
		newnode=new node;
		newnode->data=data;
		newnode->next=NULL;
		curr->rear;
	}


};
