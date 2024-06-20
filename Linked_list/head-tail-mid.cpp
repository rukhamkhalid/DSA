#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		node*next;
	Node(int val)
	{
	  data=val;
	  next=NULL;	
	}
};int main()
{
	Node*n=new node(1);
	cout<<n->data<<"->"<<n->next<<endl;
	return 0;
}
