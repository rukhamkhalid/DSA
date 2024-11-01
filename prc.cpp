#include<iostream>
using namespace std;
int stack[5],top=-1;
void push(int data)
{
	if(top>=4)
	{
		cout<<"\n Stack is full not insert.\n";
	}else{
		top++;
		stack[top]=data;
	}
} void display()
{
	for(int i=top;i>=0;i--)
	{
		cout<<"|\t"<<stack[i]<<"\t|"<<endl;
	}}void pop()
{     if(top<=-1)
   {
	  cout<<"Stack is empty not pop\n";
  }else
  {
  	cout<<"Stack is not empty pop element:"<<stack[top]<<endl;
  }
}void peek()
{
	cout<<"tHIS IS THE TOP ELEMENT:"<<stack[top];
}
void isFull()
{
	if(top>=4)
	{
		cout<<"stack is full";
	}
}void isEmpty()
{
	if(top<=0)
	{
		cout<<"\nEMPTY";
	}
}
int main(){

  push(5);
  push(8);
  push(78);
  push(89);
  push(56);
  push(34);
  display();
  pop();
  peek();
}
