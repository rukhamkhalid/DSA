#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node*next;
	
	Node(int val)
	{
		data=val;
		next=NULL;
}
};	void insertAtHead(Node* &head,int val)
    {
    	Node*new_Node=new Node(val);
    	new_Node->next=head;
    	head=new_Node;
	
   }void display(Node* head)
   {
   	 Node*temp=head;
   	 while(temp!=NULL)
   	 {
   	 	cout<<temp->data<<"->";
   	 	temp=temp->next;
		}cout<<"NULL"<<endl;
   }

int main()
{
	Node* head=NULL;
	insertAtHead(head,2);
	display(head);
	insertAtHead(head,4);
	display(head);
	return 0;
}
