#include<iostream>
using namespace std;
int stack[10], top=-1;
void push(int data){
	if(top>=10){
		cout<<"stack is full";
	}
	else{
		top++;
		stack[top]=data;
	}
}
void pop(){
	if(top<=-1){
		cout<<"Stack is empty"<<endl;
	}
	else{
		stack[top]=0;
		top--;
	}
}
int peek(){
	if(top<=-1){
		cout<<"Stack is Empty"<<endl;
	}
	else{
	 return stack[top];
	}
}
void display(){
	for(int i=top;i>=0;i--){
		cout<<stack[i]<<endl;
	}
}
bool isEmpty(){
	if(top<=-1){
		return true;
	}
	else{
		return false;
	}
}
bool isFull(){
	if(top>=9){
		return true;
	}
	else {
		return false;
	}
}
int main(){
	push(3);
	push(15);
	push(50);
	display();
	
	pop();
	display();
	peek();
	display();
	isFull();
	display();
	return 0;
	
}
