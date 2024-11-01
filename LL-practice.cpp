#include<iostream>
using namespace std;
struct node
{
   int data;
   node *next;	
}; class linkedList
{
 node*head,*curr;
	public:
		linkedList()
		{
			head=NULL;
			curr=NULL;
		}
		void insert(int data)
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
				curr=curr->next;}
				curr->next=newnode;
			}
		}void insertAtStart(int data)
		{
			node *newnode;
			newnode=new node;
			newnode->data=data;
			newnode->next=head;
			head=newnode;
		}void display()
		{
			curr=head;
			while(curr)
			{
				cout<<curr->data<<"->";
				curr=curr->next;
			}cout<<"NULL";
			cout<<endl;
		}};int main()
{
	linkedList obj;
	obj.insert(2);
	obj.insert(6);
	obj.insert(88);
	obj.insert(55);
	//obj.insertAtStart(3);
	obj.display();
	obj.insertAtStart(3);
	
	obj.display();
}
