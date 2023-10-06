class MyCircularQueue {
    int *arr;
    int front;
    int rear;
    int size;
public:
    MyCircularQueue(int k) {
        this->size=k;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    
    bool enQueue(int value) {
        //check full or not
        if( isFull()){
            return false;
        } 

        //insert first
        else if(rear==-1 && front==-1){
            front=0;
            rear=0;
            arr[rear]=value;
        }

        //if rear is last
        else if(front!=0 && rear==size-1){
            rear=0;
            arr[rear]=value;
        }

        //other
        else{
            rear++;
            arr[rear]=value;
        }
        return true;
    }
    
    bool deQueue() {
        //check empty or not
        if(isEmpty()){
            return false;
        }

        int ans=arr[front];
        arr[front]=-1;
        
        //single element
        if(front==rear){
            front=-1;
            rear=-1;
        }

        //front at last index
        else if(front==size-1){
            front=0;
        }

        else{
            front++;
        }

        return true;
    }
    
    int Front() {
         if(isEmpty()) {
            return -1;
        }
        return arr[front];
    }
    
    int Rear() {
        if(isEmpty()) {
            return -1;
        }
        return arr[rear];
    }
    
    bool isEmpty() {
        if(front==-1 ){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool isFull() {
        if( (front==0 && rear==size-1)||(rear==(front-1)%(size)) ){
            return true;
        } 

        else{
            return false;
        }
    }
};
