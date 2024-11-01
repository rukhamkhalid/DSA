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


// void enqueue(int data, int prio) {
//     // Create a new node
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->priority = prio;
//     newNode->next = nullptr;

//     // If the queue is empty, or the new node has higher priority than the front
//     if (front == nullptr || front->priority < prio) {
//         newNode->next = front;  // Insert new node at the front
//         front = newNode;
//     } else {
//         // Traverse the list to find the correct position to insert the new node
//         Node* current = front;
//         while (current->next != nullptr && current->next->priority >= prio) {
//             current = current->next;
//         }
//         // Insert the new node after the current node
//         newNode->next = current->next;
//         current->next = newNode;
//     }
// }