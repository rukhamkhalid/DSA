//queue linkedlist
#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

class queue {
    private:
    node *rare,*front;
    public:
    queue(){
        rare = NULL;
        front = NULL;
    }

    bool isempty(){
        return front == NULL;
    }

    void enqueue(int data){
        node *newnode =new node ();
        newnode -> data = data;
        newnode -> next = NULL;

        if (rare == NULL){
            rare = newnode;
            front = newnode;
            return;
        }

        rare ->next = newnode;
        rare = newnode;
    }

    void dequeue (){
        if (isempty()){
            cout<<"Queue underflow!";
            return;
        }
        else if (front == rare )
        {
            node *temp = front;
            front = front -> next;
            delete temp;
            front = NULL;
            rare = NULL;
            return;
            
        }
        node *temp = front;
        front = front -> next;
        delete temp;
    }

    void display (){
        node *curr = front;
        while (curr)
        {
            cout<<curr ->data<<" ";
            curr = curr->next;
        }
        cout<<"\n";
    }
    int peek(){
        if (isempty()){
            cout<<"Queue underflow!\n";
            return -1;
        }
        int value = front ->data;
        return value;
    }



};

int main() {
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display(); // Output: Queue elements: 10 20 30

    q.dequeue(); // Output: Dequeued: 10
    q.display(); // Output: Queue elements: 20 30

    q.dequeue(); // Output: Dequeued: 20
    q.display(); // Output: Queue elements: 30

    q.dequeue(); // Output: Dequeued: 30
    q.display(); // Output: Queue is empty

    q.dequeue(); // Output: Queue Underflow

    return 0;
}






// priority queue