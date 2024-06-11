void swap(vector<int> &arr, int pos1, int pos2, int length){
    int temp = 0;
    temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}

int Solution::firstMissingPositive(vector<int> &A) {

for(int i=0;i<A.size();i++){
    while(A[i]!=i+1 && A[i]>0 && A[i]<=A.size() && A[i]!=A[A[i]-1]){
        swap(A,i,A[i]-1,A.size());
    }
}

for(int i=0;i<A.size();i++){
    if(A[i]!= i+1)
    return i+1;
}

return 0;
}



