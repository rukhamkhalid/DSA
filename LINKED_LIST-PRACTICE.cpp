#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
	class Linkedlist
{   private:
	node *head,*curr;
	public:
		Linkedlist(int d)
		{
			head=new node;
			curr=new node;
			head->data=d;
			curr=NULL;
		}
		void insert_tail(int d)
		{
			node *newnode;
			newnode=new node;
			newnode->data=d;
			newnode->next=NULL;
			curr=head;
			while(curr->next!=NULL)
			{
				curr=curr->next;
			}curr->next=newnode;
		}void insert_head(int d){
			node*newnode;
			newnode=new node;
			newnode->data=d;
			newnode->next=NULL;
			newnode->next=head;
			head=newnode;
		}void Traverse()
		{
			curr=head;
			while(curr!=NULL)
			{
				cout<<curr->data<<endl;
				curr=curr->next;
			}
		}
};int main()
{
	Linkedlist list(5);
	list.insert_tail(30);
	list.insert_head(111);
	list.insert_tail(20);
	list.insert_tail(40);
	list.Traverse();
	return 0;
}
