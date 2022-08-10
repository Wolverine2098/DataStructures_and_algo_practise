#include<iostream>

using namespace std;
template <typename T>
class QueueUsingArray{
 T *data;
 int firstIndex;
 int nextIndex;
 int size;
 int capacity;
 public:
 QueueUsingArray(){
     data = new T[4];
     nextIndex = 0;
     firstIndex =-1;
     size = 0;
     capacity =4;

 }

 int getSize(){
     return size;

 }
bool isEmpty(){
    return size==0;
}

void enqueue(T element){
    if(size== capacity){
        T *newqueue = new T[capacity*2];
        for(int i=0;i<capacity;i++){
            newqueue[i] = data[i];
        }
        capacity = capacity*2;
        size++;
        data = newqueue;
        return;
    }
    data[nextIndex] = element;
    nextIndex = (nextIndex+1)%capacity;
    if(firstIndex==-1){
        firstIndex=0;
    }
    size++;


}
T front(){
    if(isEmpty()){
        cout<<"Queue empty !"<<endl;
    return 0;
    }
    return data[firstIndex];
}

T dequeue(){
  if(isEmpty()){
        cout<<"Queue empty !"<<endl;
    return 0;
    }

    T ans = data[firstIndex];
    firstIndex= (firstIndex+1)%capacity;
    size--;
    if(size==0){
        firstIndex= -1;
        nextIndex = 0;
    }

    return ans;  
}
};

int main(){
    QueueUsingArray<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
    cout<<q.getSize()<<endl;
     q.enqueue(40);
    q.enqueue(50);


}