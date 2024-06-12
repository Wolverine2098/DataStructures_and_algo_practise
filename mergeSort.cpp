/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;


void merge(vector<int> &arr, int start, int mid,int end){
  
  vector<int> left;
  vector<int> right;
  
  for(int i=0;i<mid;i++){
      left.push_back(arr[i]);
  }
  cout<<"first half"<<endl;
  for(int i=0;i<mid;i++){
      cout<<left[i]<<" ";
  }
  cout<<endl;
  for(int j =mid;j<end;j++){
      right.push_back(arr[j]);
  }
  
  int mainptr = 0;
  int i=0;
  int j = 0;
  while(i<mid && j<right.size()){
      if(left[i]<=right[j]){
          arr[mainptr] = left[i];
          i++;
          
      }
      else{
          arr[mainptr] = right[j];
          j++;
      }
      mainptr++;
  }
  while(j<end){
      arr[mainptr] = right[j];
      j++;
      mainptr++;
  }
  while(i<mid){
      arr[mainptr] = left[i];
      i++;
      mainptr++;
  }
  
}

void mergeSort(vector<int> &arr, int start, int end){
    
    if(start<end)
     return;
     
        int mid = start+ (end - start)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    
}



int main()
{
    vector<int> arr = {1,4,5,10,2,3,6,12};
    
    int start = 0;
    int end = arr.size();
    mergeSort(arr,start,end);
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}
