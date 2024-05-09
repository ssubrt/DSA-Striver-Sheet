--------------->>>>>>>>>>>>>> Approach -1 <<<<<<<<<<<<<<<<<<<<<<<--------------
// T.C - O(n)
// S>C - O(1)

int mySqrt(int x) {
        long long ans =0; 

        for(long long int i=0;i<=x;i++){
            long long val = i*i;
            if(val<=x){
                ans  = i;
            }else{
                break;
            }
        }
        return ans;
}

-------------------------->>>>>>>>>>>>>>>>>>>> Approach -2 <<<<<<<<<<<<<<<<<<<-------------------------

//T.C - O(log n)
// S.C - O(1)

  int mySqrt(int x) {
        int ans  = sqrt(x);
        return ans;
 }



-------------------------->>>>>>>>>>>>>>>>>>>> Approach -3 <<<<<<<<<<<<<<<<<<<-------------------------

//T.C - O(log n)
// S.C - O(1)

 long long int BinarySearch(long  long int x){
        int start = 0 ; int end =x;
        long long int ans =-1;
        while(start<=end){
            long long int mid  = (start+end)/2;
            long long int square = mid*mid;

            if(square == x){
                return mid;
            }
            else if (square < x){
                ans =mid;
                start = mid +1;
            }
            else{
                end = mid -1;
            }
        }
        return ans;
    }
    int mySqrt(int x) {
        return BinarySearch(x);
    }