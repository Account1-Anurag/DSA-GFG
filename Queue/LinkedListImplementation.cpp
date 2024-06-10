/*
#include <bits/stdc++.h>
using namespace std;
struct node{
    int data ;
    node *next;
    node(int x){
        data=x;
        next=null;
    }
};
struct queue{
    node *front,*rear;
    int size;
    queue(){
        front=NULL;
        rear=NULL;
        size=0;
    }
    void enque(int x){
        node*temp=new node(x);
        size++;
        if(front==NULL){
            front=rear=temp;
            return temp;
        }
        rear->next=temp;
        rear=temp;
    }
    void deque(){
        node*temp=front;
        if(front==NULL)return NULL;
        front=front->next;
        if(front==NULL){
            rear=NULL;
        }
        delete temp;
        size--;

    }
    int getfront(){
        return front;
    }
    int getrear(){
        return rear;
    }
    bool isempty(){
        return (front==NULL);
    }
    bool isfull(){
        return ()
    }
    int getsize(){
        return size;
    }
}
int main(){
    queue q; 
	q.enQueue(10); 
	q.enQueue(20); 
	q.deQueue(); 
	q.deQueue(); 
	q.enQueue(30); 
	q.enQueue(40); 
	q.enQueue(50); 
	q.deQueue(); 
	cout << "Queue Front : " << (q.front)->data << endl; 
	cout << "Queue Rear : " << (q.rear)->data; 
    return 0;
}
*/



#include <bits/stdc++.h> 
using namespace std; 

struct QNode { 
	int data; 
	QNode* next; 
	QNode(int d) 
	{ 
		data = d; 
		next = NULL; 
	} 
}; 

struct Queue { 
	QNode *front, *rear; 
	Queue() 
	{ 
		front = rear = NULL; 
	} 

	void enQueue(int x) 
	{ 

		 
		QNode* temp = new QNode(x); 

		 
		if (rear == NULL) { 
			front = rear = temp; 
			return; 
		} 

		 
		rear->next = temp; 
		rear = temp; 
	} 

	 
	void deQueue() 
	{ 
		 
		if (front == NULL) 
			return; 

	 
		QNode* temp = front; 
		front = front->next; 

	
		if (front == NULL) 
			rear = NULL; 

		delete (temp); 
	} 
}; 


int main() 
{ 

	Queue q; 
	q.enQueue(10); 
	q.enQueue(20); 
	q.deQueue(); 
	q.deQueue(); 
	q.enQueue(30); 
	q.enQueue(40); 
	q.enQueue(50); 
	q.deQueue(); 
	cout << "Queue Front : " << (q.front)->data << endl; 
	cout << "Queue Rear : " << (q.rear)->data; 
} 
