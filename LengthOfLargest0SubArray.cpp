/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
//longest subarray zero sum

int longestSubArray(vector<int> &arr){
    map<int,int> list;
    
    vector<int> prefixSum(arr.size());
    prefixSum.push_back(arr[0]);
    
    
    list[prefixSum[0]] = 0;
    int lSubArr = 0;
    for(int i=1;i<arr.size();i++){
        int tempKey = 0;
        prefixSum[i] = prefixSum[i-1]+arr[i];
        
        if(list.find(prefixSum[i])!=list.end())
        {
            tempKey = i-list[prefixSum[i]]; 
            
        }
        else if(prefixSum[i] == 0)
        { 
            tempKey = i;
            
        }
        
        else
        
        list[prefixSum[i]] = i;
        
        
       if(tempKey>lSubArr)
       lSubArr =tempKey;
    }
    
    return lSubArr;
    
    
}



int main()
{
    vector<int> arrCheck = {15, -2, 2, -8, 1, 7, 10, 23};
    cout<<longestSubArray(arrCheck)<<endl;

    return 0;
}