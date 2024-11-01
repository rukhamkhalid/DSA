#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
}; class linkedList
{    
   node *head,*curr;
   public:
   	
   linkedList()
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
		   }
		   curr->next=newnode;
	   }
   	 
   } void insertAtPos(int data,int pos)
   {
      node *newnode;
      newnode=new node;
      newnode->data=data;
      newnode->next=NULL;
      int i=1;
      curr=head;
      while(curr->next!=NULL&& i!=pos)
      {
      	curr=curr->next;
      	i+=1;
	  }newnode->next=curr->next;
	   curr->next=newnode;
   	   
   } void delAtPos(int pos)
   {
   	node *temp;
   	int i=1;
   	curr=head;
   	while(curr->next!=NULL&&i!=pos)
   	{
   		curr=curr->next;
   		i+=1;
	   }temp=curr->next;
	   curr->next=curr->next->next;
	   temp->next=NULL;
	   delete temp;
   	  
   } void delAtEnd()
   {
   	node *temp;
   	curr=head;
   	while(curr->next->next!=NULL)
   	{
   		curr=curr->next;
	   }temp=curr->next;
	   curr->next=NULL;
	   delete temp;
   }
	  void display()
	  {
	  	curr=head;
	  	while(curr)
	  	{
	  		cout<<curr->data<<"->";
	  		curr=curr->next;
		  }cout<<"NULL";
		  cout<<endl;
	  }
	
};int main()
{
	linkedList obj;
	obj.insert(5);
	obj.insert(6);
	obj.insert(4);
	obj.insert(10);
	obj.insertAtPos(88,3);
	obj.display();
	obj.delAtPos(3);
	obj.display();
	obj.delAtEnd();
	obj.display();
	
}













