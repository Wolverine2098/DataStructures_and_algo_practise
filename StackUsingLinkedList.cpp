#include <iostream>
using namespace std;
template <typename T>
class Node {
    public:
    T data;
    Node<T> *next;
    Node(T data){
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class Stack {
    Node<T> *head;
    int size;
    public :

    Stack(){
        // cout<<"this called"<<endl;
        size = 0;
        head = NULL;

    }

    int getSize(){
    return size;
    }

    bool isEmpty(){
    if(size==0){
        return true;
    }
    else 
    return false;
    }
void push (T element){
    Node<T> *temp = new Node(element);
    
size++;
    
    // temp->next = NULL;
    if(head == NULL){
       
        head = temp;
        

    }
    else {
      
       
        temp->next =head;
        
        head = temp;
        

    }


}

T pop(){
    if(head == NULL)
    return 0;
    else{
        T datat;
        datat = head->data;
        head = head->next;
        size--;
        return datat;

    }


}

T top(){
if(head == NULL)
return 0;
else {
   
return head->data;
}

}

};

int main(){

Stack<int> s1 ;
s1.push(10);
// cout<<s1.getSize()<<endl;
// cout<<s1.top();
s1.push(20);
// cout<<s1.getSize()<<endl;
// cout<<s1.top();
s1.push(30);
//cout<<s1.top();
// s1.push(40);
// cout<<s1.top();
// cout<<s1.pop();
// cout<<s1.getSize();
    return 0;
}
