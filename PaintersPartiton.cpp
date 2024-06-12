/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int findmax(int arr[], int M){
    int max = INT_MIN;
    
    for(int i=0;i<M;i++){
    if(arr[i]>max)
    max = arr[i];
    }
    return max;
    
}

int findSum(int arr[], int M){
    int sum = 0;
    for(int i=0;i<M;i++){
        sum = sum+arr[i];
    }
    return sum;
}

int findPainters(int arr[], int M, int maxVal){
    int painter = 1;
    int res = 0;
    for(int i=0;i<M;i++){
        res+= arr[i];
        
        if(res>maxVal){
            res = arr[i];
            painter++;
        }
    }
    return painter;
}


int partition(int arr[], int M, int N){
    
    int start = findmax(arr,M);
    int end = findSum(arr,M);
    
    
    
    while(end>start){
        int mid = start+ (end-start)/2;
        int res = findPainters(arr,M,mid);
        if(res<=N){
            end = mid;
            
        }
        else
        start = mid+1;
    }
    return start;
    
}
int main()
{
    int arr[] = {20, 50, 10, 30, 40, 80};
    int M = sizeof(arr) / sizeof(arr[0]); // total size of tiles
    int N = 3; // no of painters
    cout << partition(arr, M, N) << endl;
    return 0;
}
