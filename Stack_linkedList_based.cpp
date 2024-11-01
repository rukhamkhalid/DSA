#include<iostream>
using namespace std;

struct node{
	int data;
	node * next;	
};

class Stack{
	private:
		node * top, *curr;
	public:
		Stack(){
			top=NULL;
			curr= NULL;
		}
		void push(int data){
			node * newnode = new node;
			newnode->data = data;
			newnode->next = top;
			top = newnode;
		}
		
		void pop(){
			node * temp;
			temp = top;
			top= top->next;
			temp->next=NULL;
			delete temp;
		}
		
		void display(){
			curr = top;
			while(curr){
				cout<<curr->data<<"->";
				curr= curr->next;
			}
		}
};


int main (){
	
	Stack test;
	test.push(203);
	test.push(205);
	test.push(206);

	test.display();
	cout<<endl;
	test.pop();
	
	test.display();
	return 0;
}