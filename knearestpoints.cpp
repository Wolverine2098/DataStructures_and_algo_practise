#include <bits/stdc++.h>
using namespace std;

void pClosest(vector<vector<int> >&arr,int k){
    
    
map<int,int> sortedmp;

for(int i=0;i<arr.size();i++){
    int x = arr[i][0];
    int y = arr[i][1];
    sortedmp.insert({(x*x +y*y),i});
}
  int j = 0;
  for(auto i = sortedmp.begin();i!=sortedmp.end()&& j<k;i++){
      cout<<arr[i->second][0]<<" "<<arr[i->second][1]<<endl;
      j++;
  }  
}



int main() 
{
    vector<vector<int>> points = { { 3, 3 },
                                   { 5, -1 },
                                   { -2, 4 } };
     
    int K = 2;
     
    pClosest(points, K);
    return 0;
}
