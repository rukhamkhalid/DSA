#include<iostream>
using namespace std;
int stack[5];
int top=-1;
void push(int data)
{
	if(top==4)
	{
		cout<<"Stack is full"<<endl;
		
	}else
	{
		top++;
		stack[top]=0;
		top--;
	}
}
void pop()
{
	if(top==-1)
	{
		cout<<"Stack is empty"<<endl;
		
	}else
	{
		stack[top]=0;
		top--;
	}}
void traversal()
{
	for(int i:stack)
	cout<<"|  "<<i<<"  |"<<endl;
}bool isFull()
{
	if(top==4)
	{
		return true;
	} return false;
	
}bool isEmpty(){
	if(top==-1)
	{
		return true;
	}return false;
};int main()
{
	push(30);
	push(40);
//	pop();
//	push(50);
//	push(1);
//	push(6);
//	push(5);
	traversal();
	return 0;
}
	
	