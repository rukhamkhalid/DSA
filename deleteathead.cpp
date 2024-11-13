#include<iostream>
using namespace std;
class Node
{
	public:
	int val;
	Node* next;
	
	Node(int data)
	{
		val= data;
		next= NULL;
}
};	void insertAtHead(Node* &head,int val)
    {
    	Node*new_Node=new Node(val);
    	new_Node->next=head;
    	head=new_Node;
	
   }
    void insertAtTail(Node* &head,int val)
     {
     	Node*new_Node=new Node(val);
     	Node* temp=head;
     	while(temp->next!=NULL){
     		temp=temp->next;
		 }//temp hass reached last node
		 
		 temp->next=new_Node;
	 }
	 void deleteAtHead(Node* &head)
   {
   	Node*temp=head;
   	head=head->next;
   	
	   }
	   void display(Node* head)
   {
   	 Node*temp=head;
   	 while(temp!=NULL)
   	 {
   	 	cout<<temp->val<<"->";
   	 	temp=temp->next;
		}cout<<"NULL"<<endl;
   } void insertAtMid(Node* &head,int val,int pos)
   {
   	if(pos==0)
   	{
   		insertAtHead(head,val);
   		return;
	   
	   }
	   Node* new_Node=new Node(val);
	   Node* temp=head;
	   int curr_pos=0;
	   while(curr_pos!=pos-1){
	   	temp=temp->next;
	   	curr_pos++;
	   }//temp is pointing to node at pos-1
	   new_Node->next=temp->next;
	   temp->next=new_Node;
   };

int main()
{
	Node* head=NULL;
	insertAtHead(head,2);
	display(head);
	insertAtHead(head,3);
	display(head);
	insertAtTail(head,4);
	display(head);
	insertAtMid(head,5,2);
	display(head);
	deleteAtHead(head);
	display(head);
	return 0;
}
