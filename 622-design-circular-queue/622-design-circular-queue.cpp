class MyCircularQueue {
public:
    int front, rear, size;
    vector<int> q;
    MyCircularQueue(int k) {
        q.assign(k,-1);
        size = 0;
        front = 0; rear = 0;
    }
    
    bool enQueue(int value) {
        if(isFull())
            return false;
        
        if(isEmpty()){
            front = rear = 0;
            q[rear] = value;
            size++;
            return true;
        }
        
        rear = (rear + 1) % q.size();
        size++;
        q[rear] = value;

        return true;
    }
    
    bool deQueue() {
        if(isEmpty())
            return false;
        q[front] = -1;
        front = (front + 1) % q.size();
        size--;
        return true;
    }
    
    int Front() {
        return q[front];
    }
    
    int Rear() {
        return q[rear];
    }
    
    bool isEmpty() {
        return size==0;

    }
    
    bool isFull() {
        return size == q.size();
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