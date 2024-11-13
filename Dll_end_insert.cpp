#include<iostream>
using namespace std;
class Node
{
	public:
		int val;
		Node* prev;
		Node* next;
    Node(int data)
    {
    	val=data;
    	prev=NULL;
    	next=NULL;
	}
};
class DoublyLinkedList{
     public:
     	Node* head;
     	Node* tail;
     	
   	DoublyLinkedList()
   	{
   		head=NULL;
   		tail=NULL;
	   }
	   void display(){
	   	Node* temp=head;
	   	while(temp!=NULL){
	   		cout<<temp->val<<" ";
	   		temp=temp->next;
		   }cout<<"NULL"<<endl;
	   }
	   void insertAtStart(int val)
	   {
	   	Node* new_node=new Node(val);
	   	 if(head==NULL)
	   	 {
	   	 	head=new_node;
	   	 	tail=new_node;
	   	 	return;
			}
			new_node->next=head;
			head->prev=new_node;
			head=new_node;
			return;
	   } void insertAtEnd(int val)
	   {
	   	Node* new_node=new Node(val);
	   	if(tail==NULL){
	   		head=new_node;
	   		tail=new_node;
	   		return;
		   }tail->next=new_node;
		   new_node->prev=tail;
		   tail=new_node;
		   return;
	   }
};int main()
{
	DoublyLinkedList dll;
	//dll.insertAtStart(1);
	//dll.insertAtStart(2);
 //	dll.insertAtStart(3);
	//dll.display();
	dll.insertAtEnd(1);
	dll.display();
	dll.insertAtEnd(2);
	dll.display();
	dll.insertAtEnd(3);
	dll.display();
	return 0;
}
