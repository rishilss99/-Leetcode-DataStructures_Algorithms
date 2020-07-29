class MyCircularQueue {
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    int *queue;
    int *head = NULL, *tail = NULL;
    int size;
    MyCircularQueue(int k) {
        size = k;
        queue = new int[k];
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if(isFull())
            return false;
        else if(isEmpty()){
            cout<<"Hiya"<<endl;
            head = queue; tail = queue;
            *head = value;
            return true;
        }
        else{
            cout<<"Go"<<endl;
            tail = tail+1<queue+size?tail+1:queue;
            *tail = value;
            return true;
        }
            
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if(isEmpty())
            return false;
        else{
            if(head == tail){
                head = NULL;
                tail = NULL;
                return true;
            }
            head = head+1<queue+size?head+1:queue;
            return true;
        }
    }
    
    /** Get the front item from the queue. */
    int Front() {
        if(isEmpty())
            return -1;
        return *head;
    }
    
    /** Get the last item from the queue. */
    int Rear() {
        if(isEmpty())
            return -1;
        return *tail;
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        if(!head && !tail)
            return true;
        else
            return false;
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        if((tail+1<queue+size?tail+1:queue) == head)
            return true;
        else 
            return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */