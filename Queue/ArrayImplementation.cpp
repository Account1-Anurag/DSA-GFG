#include <bits/stdc++.h>
using namespace std;
// struct queue{
//     int size,int cap;
//     int *arr;
//     queue(int c){
//         cap=c;
//         size=0;
//         arr=new int[cap];
//     }
//     void enque(int x){
//         if(isfull())return;
//         arr[size]=x;
//         size++;
//     }
//     void deque{
//         if(isempty())return;
//         for(int i=0;i<size-1;i++){
//             arr[i]=arr[i+1];
//         }
//         size--;
//     }
//     int getfront{
//         if(isempty())return -1;
//         else return 0;
//     }
//     int getrear(){
//         if(isempty())return -1;
//         else return size-1;
//     }   
//     bool isfull(){
//         return (size==cap);
//     }
//     bool isEmpty(){
//         return (size==0);
//     }
//     int size(){

//     }
// }


// CIRCULAR ARRAY IMPLEMENTATION
/*
struct queue{
    int cap,size;
    int front;
    int *arr;
    queue(int c){
        cap=c;
        size=0;
        front=0;
        arr=new int[cap];
    };
    void enque(int x){
        if(isfull())return;
        int rear=getrear();
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;

    };
    void deque{
        if(isempty())return;
        front=(front+1)%cap;
        size--;
    };
    int getrear(){
        if(isempty())return -1;
        else return (front+size-1)%cap;
    }
    int getfront(){
        if(isempty())return -1;
        else return front;
    }
    bool isempty(){
        return (size==0);
    }
    bool isfull(){
        return (size==cap);
    }
};
int main(){
    
    return 0;
}
*/



#include <bits/stdc++.h> 
using namespace std; 

 
class Queue { 
public: 
	int front, rear, size; 
	unsigned capacity; 
	int* array; 
}; 

 
Queue* createQueue(unsigned capacity) 
{ 
	Queue* queue = new Queue(); 
	queue->capacity = capacity; 
	queue->front = queue->size = 0; 

	 
	queue->rear = capacity - 1; 
	queue->array = new int[( 
		queue->capacity * sizeof(int))]; 
	return queue; 
} 

 
int isFull(Queue* queue) 
{ 
	return (queue->size == queue->capacity); 
} 


int isEmpty(Queue* queue) 
{ 
	return (queue->size == 0); 
} 


void enqueue(Queue* queue, int item) 
{ 
	if (isFull(queue)) 
		return; 
	queue->rear = (queue->rear + 1) 
				% queue->capacity; 
	queue->array[queue->rear] = item; 
	queue->size = queue->size + 1; 
	cout << item << " enqueued to queue\n"; 
} 

 
int dequeue(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	int item = queue->array[queue->front]; 
	queue->front = (queue->front + 1) 
				% queue->capacity; 
	queue->size = queue->size - 1; 
	return item; 
} 


int front(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	return queue->array[queue->front]; 
} 

 
int rear(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	return queue->array[queue->rear]; 
} 

 
int main() 
{ 
	Queue* queue = createQueue(1000); 

	enqueue(queue, 10); 
	enqueue(queue, 20); 
	enqueue(queue, 30); 
	enqueue(queue, 40); 

	cout << dequeue(queue) 
		<< " dequeued from queue\n"; 

	cout << "Front item is "
		<< front(queue) << endl; 
	cout << "Rear item is "
		<< rear(queue) << endl; 

	return 0; 
} 


