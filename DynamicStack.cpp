#include <iostream>
using namespace std;
class StackUsingArray{
int *data;
int nextIndex;
int capacity;

public:
StackUsingArray(){
    data = new int[4];
    nextIndex = 0;
    capacity = 4;

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
    {int *neData = new int[2 * capacity];
    for(int i=0 ; i<capacity;i++){
        neData[i] = data[i];
    }
     capacity *= 2;
     delete [] data;
     data = neData;
     }
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
    StackUsingArray s;
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
    s.push(60);
    cout<< s.top()<<endl;
    s.push(70);
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