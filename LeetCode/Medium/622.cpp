class MyCircularQueue {
    int front, rear;
    int *arr;
    int size;
    /** Initialize your data structure here. Set the size of the queue to be k. */
    public: MyCircularQueue(int k) {
        size = k;
        arr = new int[k];
        front = rear = -1;
    }

    /** Insert an element into the circular queue. Return true if the operation is successful. */
    public: bool enQueue(int value) {
        if((front == 0 && rear == size-1) || (front == rear + 1)){
            return false;
        }
        else if(front==-1){
            front = rear = 0;
            arr[front] = value;
            return true;
        }
        else if(rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = value;
            return true;
        }
        else{
            rear++;
            arr[rear] = value;
            return true;
        }
    }

    /** Delete an element from the circular queue. Return true if the operation is successful. */
    public: bool deQueue() {
        if(front == -1){
            return false;
        }
        if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            if(front == size-1){
                front = 0;
            }
            else{
                front++;
            }
        }
        return true;
    }

    /** Get the front item from the queue. */
    public: int Front() {
        if(front == -1){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    /** Get the last item from the queue. */
    public: int Rear() {
        if(rear == -1){
            return -1;
        }
        else{
            return arr[rear];
        }
    }

    /** Checks whether the circular queue is empty or not. */
    public: bool isEmpty() {
        if(front == -1){
            return true;
        }
        else{
            return false;
        }
    }

    /** Checks whether the circular queue is full or not. */
    public: bool isFull() {
        if((front == 0 && rear == size-1) || (rear == (front - 1)%(size - 1))){
            return true;
        }
        else{
            return false;
        }
    }
};
