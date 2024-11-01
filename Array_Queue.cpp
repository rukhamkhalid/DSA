#include<iostream>
using namespace std;

int Queue[5];
int mark=-1;
void enqueue(int d)
{
	if(mark==4)
	 cout<<"Queue is full"<<endl;
	else{
		mark++;
		Queue[mark]=d;
	}
}void dequeue()
{
	if(mark==-1)
	{
		cout<<"Queue is Empty"<<endl;
	}
	else
	{
		for(int i=0;i<mark;i+=1)
		 Queue[i]=Queue[i+1];
		 mark--;
	}
}void traversal(){
	for(int i=0;i<mark;i++)
	 cout<<Queue[i]<<"->";
}bool isEmpty()
{
	if(mark==-1)
	return true;
	return false;
	
}bool isFull()
{
	if(mark==4)
	return true;
	return false;
	
};
int main()
{
	enqueue(10);
	enqueue(20);
	//dequeue();
	enqueue(30);
	//dequeue();
	//dequeue();
	enqueue(40);
	enqueue(50);
	//dequeue();
	//dequeue();
	//dequeue();
	enqueue(100);
	traversal();
	return 0;
	
	
}