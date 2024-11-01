#include<iostream>
using namespace std;
struct node
{
   int data;
   node *next;
};class stack
  {
	node *head;
	public:
	stack()
	{
		head=NULL;
	}bool isEmpty()
	{
		return head==NULL;
	} void push(int data)
	{
		node *newnode=new node;
		newnode->data=data;
		newnode->next=head;
		head=newnode;
	}void pop()
	{
		node* temp=head;
		head=head->next;
		delete temp;
	}int peek()
	{
		if(!isEmpty())
		return head->data;
	   else{
	   	cout<<"stack is empty";
	   	return INT_MIN;
	   }
	}
    };int main()
    {  stack st;
    	st.push(23);
    	st.push(45);
    	st.push(33);
    	st.push(56);
    	st.push(78);
    	st.push(9);
    	
    	
    	cout<<"top element "  << st.peek()<<endl;
    	cout<<"Removing element is"<<endl;
    	st.pop();
    	st.pop();
    	return 0;
    	
    	
	}
