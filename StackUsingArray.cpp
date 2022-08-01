#include <iostream>
using namespace std;
class StackUsingArray{
int *data;
int nextIndex;
int capacity;

public:
StackUsingArray(int TotalSize){
    data = new int[TotalSize];
    nextIndex = 0;
    capacity = TotalSize;

}
int size(){
    return nextIndex;
}
bool isEmpty(){
    if(nextIndex==0){
        return true;
    }
    else{
        return false;
    }
}
void push(int element){
    if(nextIndex == capacity)
    {cout <<"stack is full";
    return ; }
    data[nextIndex] =element;
    nextIndex++;
}
int pop(){
    if(isEmpty()){
      cout<<"stack is empty"<<endl;
      return INT_MIN;  
    }

    nextIndex--;
    return data[nextIndex];
}

int top(){
    if(isEmpty()){
      cout<<"stack is empty"<<endl;
      return INT_MIN;  
    }
    return data[nextIndex-1];
}

};

int main(){
    StackUsingArray s(10);
    s.push(10);
    cout<< s.top()<<endl;
    s.push(20);
    cout<< s.top()<<endl;
    s.push(30);
    cout<< s.top()<<endl;
    s.push(40);
    cout<< s.top()<<endl;
    s.push(50);
    cout<< s.top()<<endl;
    s.pop();
   cout<< s.top()<<endl;
    s.pop();
   cout<< s.top()<<endl;
   s.pop();
   cout<< s.top()<<endl;
   s.pop();
   cout<< s.top()<<endl;
   s.pop();
   cout<< s.top()<<endl;
}