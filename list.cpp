#include<iostream>
using namespace std;
struct node
{
	 int data;
	 node *next;
};class linkedlist
{
		node*head,*curr;
	public:
		linkedlist()
		{
			head=NULL;
			curr=NULL;
		}void insert(int data)
		{
			node *newnode;
			newnode=new node;
			newnode->data=data;
			newnode->next=NULL;
			if(head==NULL)
			{
				head=newnode;
			}else 
			{
				curr=head;
				while(curr->next!=NULL)
				{
					curr=curr->next;
				}curr->next=newnode;
			}
		}void display()
		{curr=head;
		while(curr)
 	  {
 		 cout<<curr->data<<"->";
	     curr=curr->next; } 
		cout<<"NULL";
		}
};
int main()
{
	linkedlist obj;
	obj.insert(4);
	obj.insert(7);
	obj.insert(44);
	obj.display();
}
