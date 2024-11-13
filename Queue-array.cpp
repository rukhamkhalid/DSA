//Queue array base

#include<iostream>
using namespace std;

int Queue[8];
int mark=-1;
void enqueue(int d)
{
	if(mark==7)
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
	if(mark==-1){
	return true;
	}
	return false;
	
}bool isFull()
{
	if(mark==7){
	
	return true;}
	return false;
	
};
int main()
{
	enqueue(10);
	enqueue(20);
	//dequeue();
	enqueue(100);
	//dequeue();
	//dequeue();
//	enqueue(40);
	enqueue(50);
	enqueue(60);
	enqueue(70);
	enqueue(80);
	enqueue(90);
	//enqueue(100);
	
	cout<<"before dequeue"<<endl;
	traversal();
	cout<<endl;
	dequeue();
	dequeue();
	cout<<"after deque"<<endl;
	traversal();
	return 0;
	
}