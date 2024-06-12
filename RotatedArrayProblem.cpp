int Solution::search(const vector<int> &A, int B) {

    int left = 0;
    int right = A.size()-1;

    int mid = 0;

    while(left<=right){
        mid = left +(right-left)/2;
        if(A[mid] == B)
        return mid;

        if(A[left]<=A[mid]){
          if(A[left]<B && A[mid]>B)
          right = mid -1;

          else
          left = mid+1;
        }
        else{
            if(A[right]>B && A[mid]<B)
            left = mid+1;
            else
            right = mid-1;

        }
    }
    return -1;
}
