int maxSubArray(const vector<int> &A) {
   int maxSum = 0;
   int carrySum = 0;
   for(int i=0;i<A.size();i++){
   carrySum+= A[i];
   if(carrySum < 0){
     carrySum =0;
   }
   if(carrySum>maxSum)
   maxSum = carrySum;
   }
   return maxSum;
}
