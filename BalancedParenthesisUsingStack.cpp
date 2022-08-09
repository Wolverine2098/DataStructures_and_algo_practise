#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string expression) 
{
    stack <char> bracesStack;
    for(int i=0;expression[i]!='\0';i++){
        if(expression[i]==')'){
            if(bracesStack.empty())
                return false;
            else
                bracesStack.pop();
        }
        if(expression[i]=='('){
            bracesStack.push('(');
        }
        
    }
    if(bracesStack.empty())
        return true;
    
    return false;
}

int main(){
    return 0;
}