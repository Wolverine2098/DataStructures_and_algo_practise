#include <iostream>
using namespace std;
template <typename T>
class StackUsingArray{
T *data;
int nextIndex;
int capacity;

public:
StackUsingArray(){
    data = new T[4];
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
void push(T element){
    if(nextIndex == capacity)
    {T *neData = new T[2 * capacity];
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
T pop(){
    if(isEmpty()){
      cout<<"stack is empty"<<endl;
      return INT_MIN;  
    }

    nextIndex--;
    return data[nextIndex];
}

T top(){
    if(isEmpty()){
      cout<<"stack is empty"<<endl;
      return 0;  
    }
    return data[nextIndex-1];
}

};

int main(){
    StackUsingArray<char> s;
    s.push(100);
    cout<< s.top()<<endl;
    s.push(101);
    cout<< s.top()<<endl;
    s.push(102);
    cout<< s.top()<<endl;
    s.push(103);
    cout<< s.top()<<endl;
    s.push(104);
    cout<< s.top()<<endl;
    s.push(105);
    cout<< s.top()<<endl;
    s.push(106);
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