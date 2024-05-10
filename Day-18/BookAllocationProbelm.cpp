// In leetcode its variation is there   
//  410. Split Array Largest Sum


// T.c  - O(N*log(N))
// S>C  - O(1)


bool isPossible(vector<int>&arr,int n , int m , int mid){
    int pageSum = 0;
    int count = 1;

    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            return false;
        }
        if(pageSum + arr[i]> mid){
            count++;
            pageSum = 0;
            pageSum += arr[i];

            if(count>m){
                return false;
            }

        }
        else{
            pageSum += arr[i];
        }
    }
    return true;
}



int findPages(vector<int>& arr, int n, int m) {
    if(m>n)  return -1;

    int start = 0;
     int end = accumulate(arr.begin(), arr.end(), 0);
    int ans = -1;

    while(start<=end){
        int mid = (start+end)/2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid -1;
        }else{
            start = mid +1;
        }
    }
    return ans;
}