int Solution::solve(string A) {
    stack <char> checkP;

    for(int i=0;i<A.size();i++){
    if(A[i]== '{' || A[i]== '(' || A[i] == '[')
    checkP.push(A[i]);

    else if(A[i]=='}' && !checkP.empty() && checkP.top()=='{')
    checkP.pop();

    else if(A[i]==')' && !checkP.empty() && checkP.top()=='(')
    checkP.pop();

    else if(A[i]==']' && !checkP.empty() && checkP.top()=='[')
    checkP.pop();

    else {
        checkP.push(A[i]);
    }
    

}
if(checkP.empty())
return 1;

else 
return 0;
}
