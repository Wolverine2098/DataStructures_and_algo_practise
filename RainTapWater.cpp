int Solution::trap(const vector<int> &A) {
vector<int>li;
vector<int>ri;

int lmax = 0;
for(int i=0;i<A.size();i++){
li.push_back(lmax - A[i]);
if(lmax<A[i])
lmax = A[i];
}

int rmax = 0;
for(int j = A.size()-1;j>=0;j--){
    ri.push_back(rmax-A[j]);
    if(A[j]>rmax)
    rmax = A[j];
}

reverse(ri.begin(),ri.end());

// for(int i=0;i<ri.size();i++){
//     cout<<ri[i]<<" ";
// }
int sum = 0;
for(int i=0;i<A.size();i++){
sum += max(min(li[i],ri[i]),0);
}
return sum;
}
